#include"login.h"
#include"Account/account.h"

bool AccountInformation::validate_username(std::string username_entry){
    if(username_entry != username){
        return false;
    }
    return true;
}

bool AccountInformation::validate_password(std::string password_entry){
    if(password_entry != password){
        return false;
    }
    return true;
}

bool AccountInformation::rest_usernameAndPassword(std::string userEntry_accountNumber){
    if(userEntry_accountNumber != account_number){
        return false;
    }
    std::string newUsername;
    std::string newPassword;
    std::cout << "Enter a new username: "; std::cin >> newUsername;
    set_username(newUsername);
    std::cout << "\nEnter a new password: "; std::cin >> newPassword;
    set_password(newPassword);
    return true;
}
bool AccountInformation::rest_pin(std::string username_entry, std::string password_entry, std::string user_PIN){
    if(username_entry != username || password_entry != password || user_PIN != PIN){
        return false;
    }
    std::string new_pin;
    std::cout "Enter a new PIN: "; std::cin >> new_pin;
    set_PIN(new_pin);
    return true;
}
 