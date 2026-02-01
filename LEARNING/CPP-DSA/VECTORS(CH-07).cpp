// CAPACITY GETS DOUBLE WHILE SIZE DEPENDS 


#include <iostream>

#include <vector>

using namespace std;

int main ()

{
    vector <int> vec = {};

    cout << "The size of orignal vector is:" << vec.size() << "\n";

    vec.push_back(1);
    vec.push_back(2);

    cout << "The size of new vector is:" << vec.size() << "\n";
    cout << "The capacity of vector is:" << vec.capacity() << "\n";


    return 0;
    
}