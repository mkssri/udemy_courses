#include <iostream>
#include "Account.h"

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
