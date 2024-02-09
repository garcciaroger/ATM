#pragma once
#include<iostream>
#include<sstream>
#include<cctype>
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
        //Checks to see that the exact length of account number is 12
        if(new_account_number.length() != 12){
            std::cerr << "ERROR: Account number must be exactly 12 digits" << std::endl;
            return false;
        }
        //This function checks account number for any invalid data
        for(char c: new_account_number){
            if(!std::isdigit(c)){
                std::cerr << "ERROR: Invalid character in account number. " << std::endl;
                return false; 
            }
        }
        //Sets account number to new_account_number and returns true
        account_number = new_account_number;
        return true;
    }
    bool set_balance(double new_balance) {
        // Ensure the balance is not negative
        if (new_balance <= 0) {
            std::cerr << "ERROR: Balance cannot be negative!" << std::endl;
            return false;
        }

        // Round the balance to two decimal places
        new_balance = std::round(new_balance * 100.0) / 100.0;

        // Convert the rounded balance to a string
        std::string balance_str = std::to_string(new_balance);

        // Check if each character in the string is a digit or a decimal point
        bool has_decimal_point = false;
        for (char c : balance_str) {
            if (!std::isdigit(c) && c != '.') {
                std::cerr << "ERROR: Invalid character in balance!" << std::endl;
                return false;
            }
            if (c == '.') {
                if (has_decimal_point) {
                    std::cerr << "ERROR: Multiple decimal points in balance!" << std::endl;
                    return false;
                }
                has_decimal_point = true;
            }
        }

        // Check if exactly one decimal point is present
        if (!has_decimal_point) {
            std::cerr << "ERROR: No decimal point in balance!" << std::endl;
            return false;
        }

        // Set the balance
        balance = new_balance;
        return true;
    }

    //Default Initilization
    Account():account_number("N/A"), balance(0.0){}
    //Methods
    bool deposit(double amount);
    bool withdraw(double amount);
};








