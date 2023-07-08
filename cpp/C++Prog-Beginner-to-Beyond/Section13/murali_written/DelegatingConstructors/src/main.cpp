// Section 13
// Delegation Constructors
#include <iostream>
#include <string>

using namespace std;

class Player
{
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

Player::Player(std::string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
    cout << "Three-args constructor!" << endl;
}
/*
 * We are using delegating constructor's inorder reduce code, this is the best way
 * we can use this only for initilization lists.
 */
Player::Player() 
    : Player( "None", 0, 0 ) {
    cout << "No-args constructor!" << endl;
}

Player::Player(std::string name_val) 
    : Player( name_val, 0, 0 ) {
    cout << "one-arg constructor!" << endl;
}
  

/*
OUTPUT::
❯ ./main
Three-args constructor!
No-args constructor!
Three-args constructor!
one-arg constructor!
Three-args constructor!
*/

int main() {
    
    Player empty;
    Player frank {"Frank"};
    Player villain {"Villain", 100, 55};
    
    return 0;
}


