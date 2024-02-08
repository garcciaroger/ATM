#pragma once
#include<iostream>
#include <stdexcept>
class Account{
private:
    std::string account_number;
    double balance;
public:
    //getters
    std::string get_account_number()const{
        //This function returns the account number set from set_account_number
        return account_number;
    }
    double get_balance()const{
        //This function returns the balance from the set_balance function
        return balance;
    }
    //setter
    bool set_account_number(std::string new_account_number){
        //The set_account_number function sets the account number and validates user input
        //This function validates to make sure theres no empty data
        if(new_account_number.empty()){
            std::cerr << "ERROR: Account number cannot be empty" << std::endl;
            return false;
        }
        //This function checks account number for any invalid data
        for(char c: new_account_number){
            if(!std::isdigit(c) && !std::isalpha(c)){
                std::cerr << "ERROR: Invalid character in account number. " << std::endl;
                return false; 
            }
        }
        //Sets account number to new_account_number and returns true
        account_number = new_account_number;
        return true;
    }
    bool set_balance(double new_balance){
        //The set_balance function sets the balance and validates input
        //This function ensures that the balance does not have a negative value
        if(new_balance < 0){
            std::cerr << "ERROR: Balance Negative! " << std::endl; 
            return false;
        }
        //Converts balance to string to test out that there is only integers
        std::string balance_str = std::to_string(new_balance);
        for(char c : balance_str){
            if(!std::isdigit(c)){
                std::cerr << "ERROR: Invalid character in balance! " << std::endl;
                return false;
            }
        }
        //If test cases are successful balace is set and returns true
        balance = new_balance;
        return true;
    }
    //Default Initilization
    Account():account_number("N/A"), balance(0.0){}
    //Methods
    bool deposit(double amount);
    bool withdraw(double amount);
};








