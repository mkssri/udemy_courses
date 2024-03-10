/**************************
 * author : murali sriram
 * date   : 03/09/2024
 * ***********************/

#include <iostream>

using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle(int l=1, int b=1)
    {
        this->length  = l;
        this->breadth = b;
    }
    Rectangle(Rectangle &r);
    int getLength() {return this->length;}
    int getBreadth() {return this->breadth;}
    void setLength(int l)
    {
        this->length = l;
    }
    void setBreadth(int b)
    {
        this->breadth = b;
    }
    int area();
    int perimeter;
    bool isSquare();
    //~Rectangle();
};

class Cuboid : public Rectangle
{
private:
    int height;
public:
    Cuboid(int h)
    {
        this->height = h;
    }
    int getHeight() {return this->height;} 
    void setHeight(int h) {this->height = h;} 
    int volume() {return (this->getLength()*this->getBreadth()*this->height);}
};

int main()
{
    Cuboid c(5);
    c.setLength(10);
    c.setBreadth(7);

    cout << "volume is: " << c.volume() <<endl;
    return 1;
}
