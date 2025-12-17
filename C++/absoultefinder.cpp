// To find absolute of a number
#include <iostream>

using namespace std;

int main ()

{
    int n;

    cout << "Enter value of n";
    cin >> n ;

    if (n<0)
    {
        n = 0 - n;

        cout << n;
    }

    else
    {
        cout << n;
    }

}