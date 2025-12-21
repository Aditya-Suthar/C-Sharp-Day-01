/*USAGE OF AT FUNCTION*/

#include <iostream>

#include <vector>

using namespace std;

int main ()

{
    vector <int> vec = {1,3,4,5,42,42,34};

    cout << vec.at(4);

    return 0;
}