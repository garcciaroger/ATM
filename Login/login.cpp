#include"login.h"
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

void AccountInformation::rest_username(){

}
void AccountInformation::rest_password(){

}
void AccountInformation::rest_pin(){
    
}
