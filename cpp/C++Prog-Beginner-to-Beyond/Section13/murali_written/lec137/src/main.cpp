#include <iostream>
#include <string>
#include <vector>

class Player {
public:
    // attributes
    std::string name {"Player"};
    int health {100};
    int xp {3};

    // methods
    void talk(std::string text_to_say) {
        // this method will look for name with in the same class incase if it does 
        // not find it will look at global level.
        std::cout << name << " says " << text_to_say << std::endl;
    }
    bool is_dead();
};

class Account {
public:
    // attributes
    std::string name {"Account"};
    double balance {0.0};

    // methods
    bool withdraw( double amount );
    bool deposit( double amount );
};

int main() {

    Player frank;
    Player hero;


    Player players[] {frank, hero};
    std::vector<Player> player_vec {frank};
    player_vec.push_back(hero);

    Player* enemy {nullptr};
    enemy = new Player;

    Account frank_account;
    Account jim_account;

    Account* mary_account = new Account();
    delete mary_account;


    Account accounts[] {frank_account, jim_account};
    std::vector<Account> accounts1 {frank_account};
    accounts1.push_back(jim_account);



    // Access class members
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("Hi there!!");

    //// use pointers
    (*enemy).name = "enemy";
    (*enemy).health = 1000;
    enemy->xp = 20;
    enemy->talk("Hi there!!");
    delete enemy;
    return 0;
}
