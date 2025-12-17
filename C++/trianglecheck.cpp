#include <iostream>

using namespace std ;

int main ()

{
    // to check if traingle is possible getting input of three sides of triangle

    int a,b,c ;

    cout << "Enter value of first side";
    cin >> a;

    cout << "Enter value of second side";
    cin >> b;

    cout << "Enter value of third side";
    cin >> c;

    if (a+b>c || b+c>a || a+c>b)
    {
        cout << "Trinalge is possible";
    }

    else
    {
        cout << "Triangle is not possible";
    }
    
}


