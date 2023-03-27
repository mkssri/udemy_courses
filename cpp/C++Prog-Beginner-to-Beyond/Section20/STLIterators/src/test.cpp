#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
    int a = 100;
    int *p1 = &a;

    cout << "*p1: " << *p1 << endl;
    cout << "&p1: " << &p1 << endl;
    cout << "p1: " << p1 << endl;
    return 0;
}