#include <iostream>

#include <vector>

int main()
{
    std::vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(40);
    v.push_back(40);
    v.push_back(25);
    v.push_back(70);
    v.pop_back();

    for(int x:v) {
        std::cout << x << std::endl;
    }

    std::vector<int>::iterator itr;

    for(itr=v.begin(); itr!=v.end(); itr++) {
        std::cout << *itr << std::endl;
    }

    return 0;
}
