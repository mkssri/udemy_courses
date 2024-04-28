/**************************
 * author : murali sriram
 * date   : 04/21/2024
 * ***********************/

#include <iostream>

using namespace std;

class BasicCar {

    public:
        virtual void start() {
            cout << "Basic car started..." << endl;
        }
};

class AdvancedCar : public BasicCar {

    public:
        void start() {
            cout << "Advanced car started..." << endl;
        }
};

int main() {
    
    BasicCar* ptr = new AdvancedCar();
    ptr->start(); // prints from Basic car 
}
/*
 * since in baseclass we added virtual in the method
 * and function is being overrided when use baseclass ptr
 * on a derived class object the dervied function was being called.
 */
