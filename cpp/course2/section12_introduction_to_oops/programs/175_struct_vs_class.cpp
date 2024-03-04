/***********************
author : murali sriram
date   : 03.03.2024
************************/
#include <iostream>

using namespace std;

struct Demo
{
    int x;
    int y;

    void Display()
    {
        cout << x << " " << y << endl;
    }
};

/* class Demo
{
    int x;
    int y;

    void Display()
    {
        cout << x << " " << y << endl;
    }
}; */

int main()
{
    Demo d;
    d.x = 10;
    d.y = 20;
    d.Display();
    return 1;
}


/*
  - c   language: structures can have only data members inside them.
  - cpp language: structures can have both functions and data members inside them.
  - In cpp both structure & class are same, only difference is in cpp by default all the
    datamembers & functions have access specifier as public for structure
    where as default access specifier for a class is private :)
*/
