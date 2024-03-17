/**************************
 * author : murali sriram
 * date   : 03/16/2024
 * ***********************/

#include <iostream>

using namespace std;

class Parent
{
private:
    int a; // will have access only inside the class
protected:
    int b;
public:
    int c;

    void funcParent()
    {
        a = 1;
        b = 2;
        c = 3;
    }
};

// due to private inheritance
// variable b(protected in Parent class) & variable c(public in Parent class)
// becomes private in the Child class (inherited class)
class Child : private Parent
{
private:
protected:
public:
    void funcChild()
    {
        // a = 11; // this class won't have acess to "a" as it was private variable in Parent class
        b = 12;
        c = 13;
    }
};

class Grandchild : public Child
{
private:
protected:
public:
    void funcGrandchild()
    {
        // a = 11; // this class won't have acess to "a" as it was private variable in Parent class
        // b = 12; // this class won't have acess to "b" as it becomes private variable in Child class due to private inheritance from Parent Class
        // c = 13; // this class won't have acess to "c" as it becomes private variable in Child class due to private inheritance from Parent Class
    }
};

int main()
{
    Child c1;
    
    // cout << "value of a: " << c1.a << endl; // a is not accessible anyhow as it is private variable in Parent class
    // cout << "value of b: " << c1.b << endl; // b is not accessible upon object c1 as it is private variable in Child class, it becomes due to private inheritance
    // cout << "value of c: " << c1.c << endl; // c is not accessible upon object c1 as it is private variable in Child class, it becomes due to private inheritance

    return 0;
}
