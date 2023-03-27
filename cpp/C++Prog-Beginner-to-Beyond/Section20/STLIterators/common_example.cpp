#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);



    vector<int>::iterator it = vec.begin();


    while(it != vec.end()){
        cout << *it << " ";
        ++it;
    }

    // for (auto it=vec.begin; it!=vec.end(); it++){
    //     cout << *it << " ";
    // }
}