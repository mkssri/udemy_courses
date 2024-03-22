/**************************
 * author : murali sriram
 * date   : 03/21/2024
 * ***********************/

#include <iostream>

using namespace std;

class BasicCar
{
public:
    void start()
    {
        cout << "Car started" << endl;
    }
};

class AdvancedCar : public BasicCar
{
public:
    void playMusic()
    {
        cout << "Music Playing" << endl;
    }
};

/*int main()
{
    AdvancedCar bmw;
    
    bmw.start();
    bmw.playMusic();

    return 0;
}*/

/*int main()
{
    AdvancedCar bmw; // derived class object

    BasicCar* ptr = &bmw;
    
    ptr->start();
    ptr->playMusic(); //error: no member named 'playMusic' in 'BasicCar'

    return 0;
}*/

int main()
{
    BasicCar ambassdor;
    AdvancedCar* bmw_ptr = &ambassdor; // error: cannot initialize a variable of type 'AdvancedCar *' with an rvalue of type 'BasicCar *'

    return 0;
}
