#include"account.h"
#include<iostream>
#include <stdexcept>

//This deposit function allows a deposit amount and returns 
//weather or not transfer was a success with balance update
bool Account::deposit(double amount){
    // Throws error if deposit amount is less than 0
    if (amount <= 0) {
        std::cerr << "Balance cannot be negative" << std::endl;
        return false;
    }
    // Check if the double value is effectively an integer
    if (static_cast<int>(amount) != amount) {
        std::cerr << "Invalid character detected" << std::endl;
        return false;
    }
    // Returns true and updates balance
    balance += amount;
    return true;
}
//This deposit function allows a withdraw amount and returns 
//weather or not transfer was a success with balance update
bool Account::withdraw(double amount){
    // Throws error if amount is greater than balance
    if (amount > balance) {
        std::cerr << "Withdraw amount greater than balance" << std::endl;
        return false;
    }
    // Check if the double value is effectively an integer
    if (static_cast<int>(amount) != amount) {
        std::cerr << "Invalid character detected" << std::endl;
        return false;
    }
    // Returns true and updates balance
    balance -= amount;
    return true;
}
