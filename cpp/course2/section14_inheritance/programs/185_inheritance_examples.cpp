/**************************
 * author : murali sriram
 * date   : 03/08/2024
 * ***********************/

#include <iostream>

using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle(int r=0, int b=0);
    int getLength();
    int getBreadth();
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
};

class Cuboid : public Rectangle
{
private:
    int height;
public:
    Cuboid(int l=0, int b=0, int h=0);
    int getHeight();
    void setHeight();
    int volume(); 
};

int main()
{
    Cuboid c(10,5,3);
    cout << "length: " << c.getLength();
    cout << "volume: " << c.volume();
    cout << "area: " << c.area();

    // cout << c; TODO
}

Rectangle::Rectangle(int l, int b)
{
    this->length  = l;
    this->breadth = b;
}
int Rectangle::getLength()
{
    return this->length;
}
int Rectangle::getBreadth()
{
    return this->breadth;
}
void Rectangle::setLength(int l)
{
    this->length = l;
}
void Rectangle::setBreadth(int b)
{
    this->breadth = b;
}
int Rectangle::area()
{
    return this->length * this->breadth;
}
int Rectangle::perimeter()
{
    return 2*(this->length + this->breadth);
}

Cuboid::Cuboid(int l, int b, int h) {
    this->height = h;

    /*
     * since Cuboid constructor
     * does not have direct access to
     * private data members of Rectangle class
     * i needed to do below (call their public function's)
     * inorder to setLength and setBreadth.
     * similarly, we can use getLength and getBreadth
     * methods inorder to read length and breadth variables.
     * these variables are available but cannot be accessible
     * directly as they are private variables in Base class.
     */
    this->setLength(l);
    this->setBreadth(b);
}

int Cuboid::volume()
{
    return (this->getLength() * this->getBreadth() * this->height);
}
