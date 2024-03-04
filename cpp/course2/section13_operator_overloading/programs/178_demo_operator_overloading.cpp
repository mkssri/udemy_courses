/***********************
author : murali sriram
date   : 03.03.2024
************************/
#include <iostream>

using namespace std;

class Complex
{
public:
    int real;
    int img;

    Complex(int real=0, int img=0);
    
    // Complex add(Complex c);
    Complex operator+(Complex c);
};

int main()
{
    Complex c1(4,5);
    Complex c2(6,6);
    Complex c3;

    c3 = c1 + c2;
    
    cout << "c3: " << c3.real << "+" << c3.img << "i" << endl; 

    return 1;
}

Complex::Complex(int real, int img)
{
    this->real = real;
    this->img  = img;
}

Complex Complex::operator+(Complex c)
{
    Complex temp;

    temp.real = this->real + c.real;
    temp.img  = this->img  + c.img;

    return temp;
}

/* Idea here is if 2 people have money
 * one person should give money to other
 * so the person can combine the money he
 * have with what he received and let us
 * know the total, same idea: that is the
 * reason we are sending object as parameter
 * in the add operation. wohoo!
 *
 * also function: "add" is replaced with:
 * "operator+" since we are overloading
 * already present "+" operator
 *
 * similarly you can write overloading for
 * subtraction just by changing logic and
 * creation a function with operator-, so
 * we can overload the subtraction operator.
 *
 * */
