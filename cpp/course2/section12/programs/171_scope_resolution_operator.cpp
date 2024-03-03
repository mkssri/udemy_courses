/***********************
author : murali sriram
date   : 03.01.2024
************************/

#include <iostream>

using namespace std;

class Rectangle {
    
    private:
        int length;
        int breadth;
    
    public:
        Rectangle(int l, int b) {
            length  = l;
            breadth = b;
        }
        int area() {
            return length*breadth;
        }
        int perimeter();
};

// :: -> it is called as scope resolution operator
int Rectangle::perimeter() {  // returnType className::functionName(args) {}
    return 2*(length+breadth);
}

int main() {

    Rectangle rect(10,5);

    cout << "area     : " << rect.area() << endl;
    cout << "perimeter: " << rect.perimeter() << endl;

}


/*
 * scope resolution operator tells that scope of the function is within this
 * class.. :)
 *
 * there are 2 ways to write function's:
 * 1. write function prototype in class and eloborate the function inside the class only.
 * 2. write function prototype in in class and eloborate the function outside the class
 *    via scope resolution operator( "::" ).
 *
 * // main difference b/w above implementation of functions occurs during COMPILATION
 *
 *   machine code:
 *   ------------
 *
 *   perimeter function============
 *                     ===========
 *                     ===========
 *
 * 
 *   main function
 *   ===============================
 *   ===============================
 *   ===============================
 *     area function================
 *                  ================
 *                  ================
 *
 *    note: as perimeter function is eloborated using scope resolution operator, so machine code for
 *    perimeter function will be seperate from machine code of main function, after executing area
 *    code instrctions machine code for perimeter function is called and returned to main code.
 *
 *
 *    in contrast since area function was implemented as part of the class itself, its machine code
 *    will be part machine code of main itself.
 *
 *    for above case: area function is called "INLINE FUNCTION" as this function got eloborated in
 *    class section only, so its machine code will be part of machine code of main function :) 
 *
 *    In C++ its good practise to write function body using scope resolution operator, else
 *    it will be called inline function, for sure you can write inline function's but it is not
 *    recommended if function body has complex logic/loops as it's machine code will be tied to
 *    machine code of main function...
 *
 *
 * */
