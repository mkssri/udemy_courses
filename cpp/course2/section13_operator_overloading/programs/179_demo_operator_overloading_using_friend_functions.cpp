/***********************
author : murali sriram
date   : 03.03.2024
************************/
#include <iostream>

using namespace std;

class Complex
{
private:
    int real;
    int img;
public:
    Complex(int r=0,int i=0)
    {
        real = r;
        img  = i;
    }
    void display()
    {
        cout << real << "+i" << img << endl;
    }
    friend Complex operator+(Complex c1, Complex c2);
};

// Global function, which is taking input 2 complex members
Complex operator+(Complex c1, Complex c2)
{
    Complex t;
    t.real = c1.real + c2.real;
    t.img  = c1.img  + c2.img;
    return t;
}

int main()
{
    Complex c1(5,3), c2(10,5), c3, c4;
    c3=c1+c2;
    c4=operator+(c1,c2);

    // i wrote the display function
    // since i cannot access the private
    // members in the main function
    c3.display();
    c4.display();
}

/*
 * some operators overloading can be done using member functions 
 * or can be done using friend functions also, as mentioned above.
 *
 * friend functions can access the private members of the class.
 */
