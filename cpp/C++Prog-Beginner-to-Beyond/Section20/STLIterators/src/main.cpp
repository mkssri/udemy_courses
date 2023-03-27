#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>

using namespace std;

void display(const std::vector<int> &vec){
    cout << "[";
    for(auto const &i: vec){
        cout << i << " ";
    }
    cout << "]" << endl;
}