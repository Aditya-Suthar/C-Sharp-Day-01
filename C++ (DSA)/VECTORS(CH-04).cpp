#include <iostream>

#include <vector>

using namespace std;

int main ()

{   
    vector <int> vec;

    cout << "The size of vector is :"<< vec.size() << "\n";

    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);


    vec.pop_back();

    cout << "The new size of vector is :" << vec.size() << "\n";

    cout << "The added element in the vector is :" << vec[0];

    return 0;

}