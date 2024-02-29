#include <iostream>

using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;


    public:
        /*
         NON-PARAMETERIZED CONSTRUTOR
         following constructor is called by:
         Rectangle r;
         Rectangle r();
        */
        /* Rectangle(  ) {
            length  = 0;
            breadth = 0;
        } */ // TODO: I don't need this as parameterized constructor can be called by
             // passing default parameters ot it.
        /*
         PARAMETERIZED CONSTRUTOR
         following constructor is called by:
         Rectangle r(10,5);
         Rectangle r(l=10);
         Rectangle r(b=5);
         Rectangle r(  );
        */
        Rectangle( int l=0, int b=0 ) {
            setLength(l);
            setBreadth(b);
        }
        /*
         COPY CONSTRUTOR
         parameter is Rectangle itself and argument is &r,
         we do not need new rectangle to be created when using copy constructor
         so we use the reference here, nice:)
        */
        Rectangle( Rectangle &rect ) {
            length  = rect.length;
            breadth = rect.breadth;
        }
        void setLength ( int l ) {
            if ( l>1  ) {
                length = l;
            }
            else {
                std::cout << "length cannot be negative or zero, so setting to default value" << std::endl;
                length = 1;
            }
        }
        void setBreadth ( int b ) {
            if ( b>1 ) {
                breadth = b;
            }
            else {
                std::cout << "breadth cannot be negative or zero, so setting to default value" << std::endl;
                breadth = 1;
            }
        }
        int getLength () {
            return length;
        }
        int getBreadth () {
            return breadth;
        }
        int area()
        {
            return length*breadth;
        }

        int perimeter()
        {
            return 2*(length+breadth);
        }
};

int main( )
{
    // PARAMETERIZED constructor
    Rectangle r1;
    std::cout << "length: " << r1.getLength() << std::endl; 
    std::cout << "breadth: " << r1.getBreadth() << std::endl; 

    // PARAMETERIZED constructor
    Rectangle r2(10,100);
    std::cout << "length: " << r2.getLength() << std::endl; 
    std::cout << "breadth: " << r2.getBreadth() << std::endl; 

    Rectangle r3(100,101);

    // COPY constructor
    Rectangle r4 = r3;
    std::cout << "length: " << r4.getLength() << std::endl; 
    std::cout << "breadth: " << r4.getBreadth() << std::endl; 

    return 0;

}
/*
   1. Default Constructor: one that this present in compiler, provided by compiler :)
   2. Non-parameterized constructors
      - Go to market, they will provide you some default one(blue ink and xyz brand), when you ask for pen :)
   3. Parameterized constructors
      - Go to market, ask for specific pen: red ink and xyz brand, they will give it to you.
   4. Copy constructors
      - Go to market, show pen you have and ask for the similar one: they will provide you the COPY.
   5. In above program there are 3 constructors, that is why it is called OVERLOADED constructors!!!!
*/
