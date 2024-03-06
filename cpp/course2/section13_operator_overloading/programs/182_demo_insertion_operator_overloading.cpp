/***********************
author : murali sriram
date   : 03.06.2024
************************/
#include <iostream>

using namespace std;

class Complex
{
private:
    int real;
    int img;
public:
    Complex(int r=0, int i=0)
    {
        this->real = r;
        this->img  = i;
    }
    void display()
    {
        cout << this->real << " + i" << this->img << endl;
    }

    // as operator function taking inputs from 2 different types 
    // of objects, so it cannot belong to Complex number class
    // i have to make it as friend. as it is a friend function
    // it cannot be implemented inside a class
    friend ostream & operator<<(ostream &o, Complex &c1);
};

int main()
{
    Complex c1(3,7);
    c1.display();

    /* insertion operator takes 2 parameters as inputs: complex number and ostream object
       after displaying below we want to return the cout, so we can use it again in the
       SAME LINE!!!

    */
    cout << c1 << endl; // if you donot return "cout" after executing cout << c1, then program gets stuck in endl step..
                        // suppose you are returning void in insertion operator then it would be read as:
                        // void << endl; (which gives compilation ERROR)
    operator<<(cout, c1); // this line is same as: cout << c1;

    return 0;
}
ostream& operator<<(ostream &out, Complex &c)
{
    out << c.real << " + i" << c.img << endl; 
    return out;
}

/*
 * I dont want the display function,
 * i should see result in terminal
 * when i do: cout << c1 << endl;
 *
 * so, we need to overload insertion
 * operator.
 *
 * << : it is called operator insertion
 *
 *
 *
 */
