#include <iostream>

#include <vector>

using namespace std;

int main ()

{
    vector <int> vec(5,0);

    for (int i : vec)
    {
        cout << i << "\n";
    }
    
    return 0;
}