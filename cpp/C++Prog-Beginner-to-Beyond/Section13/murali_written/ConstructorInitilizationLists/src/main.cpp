// Section 13
// Constructor Initialization Lists
#include <iostream>
#include <string>

using namespace std;

class Player
{
// with order name, health & xp that is the order in which initilazation takes place
// using initializer list, it does not depend on the other we define in the initializer list.
private:
   std::string name {"XXXXXXX"};
   int health;
   int xp;
public:
// Overloaded Constructors
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
};

Player::Player()
    :name{"None"}, health{0}, xp{0} {  
    };

Player::Player(std::string name_val)
    :name{name_val}, health{0}, xp{0} {
    };

Player::Player(std::string name_val, int health_val, int xp_val)
    :name{name_val}, health{health_val}, xp{xp_val} {

    };


int main() {
    
    Player empty;
    Player frank {"Frank"};
    Player villain {"Villain", 100, 55};
    
    return 0;
}


