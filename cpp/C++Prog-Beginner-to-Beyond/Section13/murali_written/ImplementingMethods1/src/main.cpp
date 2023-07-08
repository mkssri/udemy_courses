#include <iostream>
#include <string>


class Account {
private:
    // attributs
    std::string name;
    double balance;

public:
    // methods
    // declared inline
    void set_balance(double bal) { balance = bal; } 
    double get_balance() { return balance; }

    // methods will be declared outside the class location
    void set_name(std::string n);
    std::string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
};

// set_name method for account class
void Account::set_name( std::string n ) {
    name = n;
}

std::string Account::get_name() {
    return name;
}

bool Account::deposit( double amount ) {
   balance += amount;
   return true;
}

bool Account::withdraw( double amount ) {

    if( (balance-amount) >=0 ) {
        balance -= amount;
        return true;
    } else {
        return false;
    }
}


int main() {

    Account frank_accnt;
    frank_accnt.set_name("Frank's account");
    frank_accnt.set_balance(1000);

    if( frank_accnt.deposit(200) ) {
        std::cout << "Deposit ok!" << std::endl;
    } else {
        std::cout << "Deposit is not ok!" << std::endl;
    }

    if(frank_accnt.withdraw(500)){
        std::cout << "withdraw of 500 is ok!" << std::endl;
        std::cout << "rest balance: " << frank_accnt.get_balance() << std::endl;
    } else {
        std::cout << "withdraw of 500 is not ok!" << std::endl;
    }

    if(frank_accnt.withdraw(1500)){
        std::cout << "withdraw of 1500 is ok!" << std::endl;
        std::cout << "rest balance: " << frank_accnt.get_balance() << std::endl;
    } else {
        std::cout << "withdraw of 1500 is not ok!" << std::endl;
    }
    return 0;
}
