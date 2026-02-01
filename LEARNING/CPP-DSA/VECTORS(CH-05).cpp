// usage of front and back function inside the vector statemte

#include <iostream>
#include <vector>

using namespace std;

int main ()

{
    vector <int> vec = {1,3,4,5,6};

    cout << "The number of elements are :" << vec.size ()<<endl;

    vec.push_back(10);
    vec.push_back(23);

    vec.pop_back();

    cout << "FIRST ELEMENT IS :" << vec.front() << "\n";
    cout << "LAST ELEMENT IS :" << vec.back() << "\n";

    return 0;

    
} 
