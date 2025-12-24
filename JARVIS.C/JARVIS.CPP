#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>
#include <windows.h>

using namespace std;

static string toLowerStr(string s) {
    transform(s.begin(), s.end(), s.begin(),
              [](unsigned char c){ return (char)tolower(c); });
    return s;
}

static string trim(string s) {
    size_t start = s.find_first_not_of(" \t\r\n");
    if (start == string::npos) return "";
    size_t end = s.find_last_not_of(" \t\r\n");
    return s.substr(start, end - start + 1);
}

static bool startsWith(const string& s, const string& prefix) {
    return s.rfind(prefix, 0) == 0;
}

// Uses Windows built-in PowerShell TTS (works on most Windows 10/11)
static void speak(const string& text) {
    string safe = text;
    // crude escaping for quotes
    for (char &c : safe) if (c == '"') c = '\'';

    string cmd =
        "powershell -Command \"Add-Type -AssemblyName System.Speech; "
        "$speak = New-Object System.Speech.Synthesis.SpeechSynthesizer; "
        "$speak.Speak(\\\"" + safe + "\\\");\"";
    system(cmd.c_str());
}

static void openURL(const string& url) {
    string cmd = "start \"\" \"" + url + "\"";
    system(cmd.c_str());
}

static void openApp(const string& app) {
    // `start` can open apps registered on Windows PATH or known app names
    string cmd = "start \"\" " + app;
    system(cmd.c_str());
}

static void showTimeDate(bool wantTime, bool wantDate) {
    time_t now = time(nullptr);
    tm localTm{};
    localtime_s(&localTm, &now);

    char buf[128];
    if (wantTime && wantDate) {
        strftime(buf, sizeof(buf), "%I:%M %p, %d %b %Y", &localTm);
    } else if (wantTime) {
        strftime(buf, sizeof(buf), "%I:%M %p", &localTm);
    } else {
        strftime(buf, sizeof(buf), "%d %b %Y", &localTm);
    }
    cout << buf << "\n";
}

static void help() {
    cout << "\nCommands you can try:\n"
         << "  help\n"
         << "  time\n"
         << "  date\n"
         << "  open chrome\n"
         << "  open youtube\n"
         << "  open google\n"
         << "  search <anything>\n"
         << "  note <your text>\n"
         << "  speak <your text>\n"
         << "  shutdown\n"
         << "  restart\n"
         << "  exit\n\n";
}

int main() {
    cout << "=== Mini Jarvis (C++) ===\n";
    cout << "Type 'help' to see commands.\n\n";

    speak("Hello. I am Mini Jarvis. Type help to see commands.");

    while (true) {
        cout << "You: ";
        string input;
        getline(cin, input);

        string raw = trim(input);
        string cmd = toLowerStr(raw);

        if (cmd.empty()) continue;

        if (cmd == "help") {
            help();
            continue;
        }

        if (cmd == "exit" || cmd == "quit") {
            speak("Goodbye.");
            cout << "Jarvis: Goodbye!\n";
            break;
        }

        if (cmd == "time") {
            cout << "Jarvis: ";
            showTimeDate(true, false);
            continue;
        }

        if (cmd == "date") {
            cout << "Jarvis: ";
            showTimeDate(false, true);
            continue;
        }

        if (cmd == "open chrome") {
            speak("Opening Chrome.");
            openApp("chrome");
            continue;
        }

        if (cmd == "open youtube") {
            speak("Opening YouTube.");
            openURL("https://www.youtube.com");
            continue;
        }

        if (cmd == "open google") {
            speak("Opening Google.");
            openURL("https://www.google.com");
            continue;
        }

        if (startsWith(cmd, "search ")) {
            string q = trim(raw.substr(7)); // keep original case for query
            speak("Searching on Google.");
            // URL encode spaces minimally
            for (char &c : q) if (c == ' ') c = '+';
            openURL("https://www.google.com/search?q=" + q);
            continue;
        }

        if (startsWith(cmd, "note ")) {
            string noteText = trim(raw.substr(5));
            // Save to a file in the same folder
            FILE* f = nullptr;
            fopen_s(&f, "jarvis_notes.txt", "a");
            if (f) {
                fprintf(f, "%s\n", noteText.c_str());
                fclose(f);
                speak("Note saved.");
                cout << "Jarvis: Note saved to jarvis_notes.txt\n";
            } else {
                speak("Sorry, I could not write the note file.");
                cout << "Jarvis: Could not write file.\n";
            }
            continue;
        }

        if (startsWith(cmd, "speak ")) {
            string text = trim(raw.substr(6));
            speak(text);
            continue;
        }

        if (cmd == "shutdown") {
            speak("Shutting down in ten seconds.");
            system("shutdown /s /t 10");
            continue;
        }

        if (cmd == "restart") {
            speak("Restarting in ten seconds.");
            system("shutdown /r /t 10");
            continue;
        }

        // Fallback
        cout << "Jarvis: I don't understand. Type 'help'.\n";
        speak("I don't understand. Type help.");
    }

    return 0;
}
