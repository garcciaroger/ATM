#pragma once
#include<iostream>
#include"account.h"

class AccountInformation : public Account{
private:
    std::string username;
    std::string password;
    std::string PIN;
public:
    //Getters
    std::string get_username()const{
        return username;
    }
    std::string get_password()const{
        return password;
    }
    std::string get_PIN()const{
        return PIN;
    }
    //Setters
    bool set_username(const std::string& new_username) {
        /*
        Username Minimum Requirements
        1. 8 Characters
        2. 2 Special Characters
        3. 2 Numbers
        4. No White Spaces
        */
        // Check if the username length is 8 characters
        if (new_username.length() != 8) {
            std::cout << "Username does not meet minimum length" << std::endl;
            return false;
        }
        int special_char_count = 0;
        int digit_count = 0;
        // Check each character in the username
        for (char c : new_username) {
            // Check for white spaces
            if (std::isspace(c)) {
                std::cout << "Username contains white spaces" << std::endl;
                return false;
            }
            // Check for special characters
            if (std::ispunct(c)) {
                special_char_count++;
            }
            // Check for digits
            if (std::isdigit(c)) {
                digit_count++;
            }
        }

        // Check if the number of special characters and digits meet the requirements
        if (special_char_count < 2) {
            std::cout << "Username does not contain enough special characters" << std::endl;
            return false;
        }
        if (digit_count < 2) {
            std::cout << "Username does not contain enough numbers" << std::endl;
            return false;
        }

        // Username meets all requirements
        return true;
    }
    bool set_password(const std::string& new_password) {
        /*
        Password Minimum Requirements:
        1. 12 Characters
        2. 3 Special Characters
        3. 3 Numbers
        4. No white spaces
        */
        // Check if the password length is 12 characters
        if (new_password.length() != 12) {
            std::cout << "Password does not meet minimum length" << std::endl;
            return false;
        }
        int special_char_count = 0;
        int digit_count = 0;

        // Check each character in the password
        for (char c : new_password) {
            // Check for white spaces
            if (std::isspace(c)) {
                std::cout << "Password contains white spaces" << std::endl;
                return false;
            }
            // Check for special characters
            if (std::ispunct(c)) {
                special_char_count++;
            }
            // Check for digits
            if (std::isdigit(c)) {
                digit_count++;
            }
        }
        // Check if the number of special characters and digits meet the requirements
        if (special_char_count < 3) {
            std::cout << "Password does not contain enough special characters" << std::endl;
            return false;
        }
        if (digit_count < 3) {
            std::cout << "Password does not contain enough numbers" << std::endl;
            return false;
        }
        // Password meets all requirements
        return true;
    }
    bool set_PIN(std::string new_PIN){
        if(new_PIN.length() != 4){
            std::cout << "ERROR: PIN does not meet 4 digit requirement" << std::endl;
            return false;
        }
        if(new_PIN.empty()){
            std::cout << "ERROR: PIN is empty" << std::endl;
            return false;
        }
        for(char c : new_PIN){
            if(!std::isdigit(c)){
                std::cout << "ERROR: Invalid Characters" << std::endl; 
            }
            return false;
        }
        PIN = new_PIN;
        return true;
    }
    //Initlizers
    AccountInformation():username("N/A"),password("N/A"),PIN("N/A"){}
    //Method
    bool validate_username(std::string username_entry);
    bool validate_password(std::string password_entry);
    bool rest_usernameAndPassword(std::string userEntry_accountNumber);
    bool rest_pin(std::string username_entry, std::string password_entry, std::string user_PIN);
};