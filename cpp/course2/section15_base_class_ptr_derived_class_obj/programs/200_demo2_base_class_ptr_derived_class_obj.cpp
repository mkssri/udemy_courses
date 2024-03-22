/**************************
 * author : murali sriram
 * date   : 03/21/2024
 * ***********************/

#include <iostream>

using namespace std;

class Rectangle
{
public:
    void area()
    {
        cout << "Area of Rectangle" << endl;
    }

};

class Cuboid:public Rectangle
{
public:
    void volume()
    {
        cout << "Cuboid Volume" << endl;
    }

};

/*int main()
{
    Cuboid c;
    c.area();
    c.volume();
    
    return 0;
}*/

/*int main()
{
    // taking cuboid object and pointing it as rectangle
    Cuboid c;
    Rectangle* r = &c; 

    r->area();
    // r->volume(); //error: no member named 'volume' in 'Rectangle'

    return 0;
}*/

int main()
{
    Rectangle r;
    // Cuboid* c = &r; //error: cannot initialize a variable of type 'Cuboid *' with an rvalue of type 'Rectangle *' 

    return 0;
}
