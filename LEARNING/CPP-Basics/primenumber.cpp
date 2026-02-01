#include <iostream>

using namespace std ;

int main ()

{
    int n;

    cout << "Enter value of n" ;
    cin >> n ;

    int freq = 0;

    for (int i=2;i<n;i++)
    {
        if (n%i == 0)
        {
            freq ++;
        }
    }

    if (freq >= 1)
    {
        cout << "Composite number";
    }

    else 
    {
        cout << "Prime number";
    }
}