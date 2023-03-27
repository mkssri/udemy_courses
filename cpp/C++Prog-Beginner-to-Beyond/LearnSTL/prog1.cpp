#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;
v.push_back(1);
v.push_back(5);
v.push_back(3);


for (auto ele: v){
    cout << ele << endl;
}

sort(v.begin(), v.end());
for (auto ele: v){
    cout << ele << endl;
}