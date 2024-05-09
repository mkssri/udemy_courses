#include <iostream>
// #include <vector>
#include <list>
// #include <forward_list>

using namespace std;

int main()
{
   // vector<int> v;
    list<int> v; // doubly linked list
    // forward_list<int> v; // single linked list, it has method: push_front
    // set<int> s; // set has "insert" function
    // in java these set of classes are called: collection framework

    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    v.pop_back(); // delete the last value

    cout<<"using for-each loop:"<<endl;
    for(int x:v) {
        cout << x << endl;
    }

    //vector<int>::iterator itr;
    list<int>::iterator itr;
    cout<<"using iterator:"<<endl;
    for(itr=v.begin(); itr!=v.end(); itr++){
        cout << *itr << endl;
        // update values ++(*itr)
        // update values --(*itr)
    }

    return 0;
}
