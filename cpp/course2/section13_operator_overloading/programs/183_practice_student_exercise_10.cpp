/***********************
author : murali sriram
date   : 03.06.2024
************************/
#include <iostream>

using namespace std;

class Rational
{
private:
    int p;
    int q;
public:
    Rational(int p=1, int q=1);
    Rational(Rational &r);

    Rational operator+(Rational &r);
    
    friend ostream& operator<<(ostream& out, Rational& r);

};

int main()
{
    Rational r1(3,5);
    Rational r2(4,7);
    Rational r3;

    r3 = r1+r2;

    cout << "Sum of " << r1 << " and " << r2 << " is " << r3 << endl;

    return 1;
}

Rational::Rational(int p, int q)
{
    this->p = p;
    this->q = q;
}

Rational::Rational(Rational &r)
{
    this->p = r.p;
    this->q = r.q;
}

Rational Rational::operator+(Rational &r)
{
    Rational t;
    t.p = this->p*(r.q) + this->q*(r.p);
    t.q = (this->q)*(r.q);
    return t;
}

ostream& operator<<(ostream& out, Rational& r)
{
    out << r.p << "/" << r.q;
    return out;
}

/*
 *  addtion and insertion operator << are overloaded in this program.
 */
