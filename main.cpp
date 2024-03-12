#include<iostream>
#include<string>
#include"Account/account.h"
#include"AccountOwner/owner.h"
#include"Login/login.h"

void loggin_menu();

int main() {
    loggin_menu();

    char choice;
    double deposit_amount = 0; // Move the initialization outside the switch statement
    bool isValid;

    do {
        //Declaring an object from the account class
        Account Checkings;
        Account Savings;
        //Main menu of the program
        std::cout << " \nWelcome to ATM Simulator   " << std::endl;
        std::cout << "==============================" << std::endl;
        while (true) {
            std::cout << "1. Deposit" << std::endl;
            std::cout << "2. Withdraw" << std::endl;
            std::cout << "3. View Balance" << std::endl;
            std::cout << "4. Exit" << std::endl;
            std::cout << "=============================" << std::endl;
            int option = 0;
            std::cout << "Enter Option: "; std::cin >> option;

            //Main menu switch case option
            switch (option) {
                //Deposit case
                case 1: {
                    int accountOption = 0;
                    //Menu options for selecting which account to deposit to
                    std::cout << "\nSelect Account to Deposit" << std::endl;
                    std::cout << "===========================" << std::endl;
                    std::cout << "1. Checkings " << std::endl;
                    std::cout << "2. Savings " << std::endl;
                    std::cout << "===========================" << std::endl;
                    std::cout << "Enter Option: ";
                    std::cin >> accountOption;

                    //Switch case for deposit amount
                    switch (accountOption) {
                        //Case to deposit to checkings account
                        case 1: {
                            do {
                                //User enters amount to deposit and set to .deposit function
                                std::cout << "Enter Deposit Amount - $";
                                std::cin >> deposit_amount;
                                isValid = Checkings.deposit(deposit_amount);
                                if (!isValid) {
                                    std::cout << "Deposit Unsuccessful! Insufficient funds or invalid amount." << std::endl;
                                }
                            } while (!isValid);
                            break;
                        }
                        //Case to deposit to savings account
                        case 2: {
                            do {
                                //User enters amount to deposit and set to .deposit function
                                std::cout << "Enter Deposit Amount - $";
                                std::cin >> deposit_amount;
                                isValid = Savings.deposit(deposit_amount);
                                if (!isValid) {
                                    std::cout << "Deposit Unsuccessful! Insufficient funds or invalid amount." << std::endl;
                                }
                            } while (!isValid);
                            break;
                        }
                    }
                    break;
                }
                //Withdraw Case
                case 2: {
                    int accountOption = 0;
                    //Withdraw menu option
                    std::cout << "\nSelect Account to Withdraw" << std::endl;
                    std::cout << "===========================" << std::endl;
                    std::cout << "1. Checkings " << std::endl;
                    std::cout << "2. Savings " << std::endl;
                    std::cout << "===========================" << std::endl;
                    std::cout << "Enter Option: ";
                    std::cin >> accountOption;
                    //Switch case for withdraw options
                    switch (accountOption) {
                        case 1: {
                            double withdrawAmount;
                            do {
                                std::cout << "Enter Withdrawal Amount: $";
                                std::cin >> withdrawAmount;
                                isValid = Checkings.withdraw(withdrawAmount);
                                if (!isValid) {
                                    std::cout << "Withdrawal Unsuccessful! Insufficient funds or invalid amount." << std::endl;
                                }
                            } while (!isValid);
                            break;
                        }
                        case 2: {
                            double withdrawAmount;
                            do {
                                std::cout << "Enter Withdrawal Amount: $";
                                std::cin >> withdrawAmount;
                                isValid = Savings.withdraw(withdrawAmount);
                                if (!isValid) {
                                    std::cout << "Withdrawal Unsuccessful! Insufficient funds or invalid amount." << std::endl;
                                }
                            } while (!isValid);
                            break;
                        }
                        default: {
                            std::cout << "Invalid option. Please enter a valid option." << std::endl;
                            break;
                        }
                    }
                    break;
                }
                //View Balance Case
                case 3: {
                    int option = 0;
                    std::cout << "\n Select Account    " << std::endl;
                    std::cout << "=====================" << std::endl;
                    std::cout << "1. Checkings " << std::endl;
                    std::cout << "2. Savings " << std::endl;
                    std::cout << "=====================" << std::endl;
                    std::cout << "Enter Option: ";
                    std::cin >> option;

                    switch (option) {
                        case 1: {
                            std::cout << "Checkings Account Balance - $" << Checkings.get_balance() << std::endl;
                            break;
                        }
                        case 2: {
                            std::cout << "Savings Account Balance - $" << Savings.get_balance() << std::endl;
                            break;
                        }
                        default: {
                            std::cout << "Invalid option. Please enter a valid option." << std::endl;
                            break;
                        }
                    }
                    break;
                }
                //Exit from the program case
                case 4: {
                    // Exit from the program
                    return 0;
                }
                default:
                    // Invalid option
                    std::cout << "Invalid option. Please enter a valid option." << std::endl;
                    break;
            }

            // Prompt user to continue or exit
            std::cout << "\nDo you want to perform another transaction? (y/n): ";
            std::cin >> choice;
            if (choice != 'y' && choice != 'Y') {
                break; // Exit loop if user chooses not to continue
            }
        }
    } while (choice == 'y' || choice == 'Y');
    return 0;
}

void loggin_menu(){
    int option = 0;
    std::cout << "      Menu Option    " << std::endl;
    std::cout << "=====================" << std::endl;
    std::cout << "1. Create New Account" << std::endl;
    std::cout << "2. Log In" << std::endl;
    std::cout << "3. Rest Username and Password " << std::endl;
    std::cout << "4. Exit" << std::endl;
    std::cout << "=====================" << std::endl;
    std::cout << "Option: "; std::cin >> option;

    AccountOwner newHolder;
    AccountInformation newAccount, restAccount;

    switch(option){
        case 1:{
            newHolder.gather_customer_information();
            //Username Requirements
            std::cout << "\nUsername Requirements " << std::endl;
            std::cout << "========================" << std::endl;
            std::cout << "1. 8 Characters " << std::endl;
            std::cout << "2. 2 Special Character " << std::endl;
            std::cout << "3. 2 Numbers " << std::endl;
            std::cout << "4. No White Spaces" << std::endl;
            std::string username;
            std::cin>> username;

            //This gets the user to create thier username and 
            //validate the username using .set_username
            bool usernameIsValid = newAccount.set_username(username);
            while(!usernameIsValid == false){
                std::cout << "Username is invalid please enter again." << std::endl;
                std::cin >> username;
                usernameIsValid = newAccount.set_username(username);
            } 

            //Password Requirements
            std::cout << "\nUsername Requirements " << std::endl;
            std::cout << "========================" << std::endl;
            std::cout << "1. 8 Characters " << std::endl;
            std::cout << "2. 2 Special Character " << std::endl;
            std::cout << "3. 2 Numbers " << std::endl;
            std::cout << "4. No White Spaces" << std::endl;
            std::string password;
            std::cin >> password;

            //This function is similar to validating and creating
            //the password
            bool passwordIsValid = newAccount.set_password(password);
            while(!passwordIsValid == false){
                std::cout << "Username is invalid please enter again." << std::endl;
                std::cin >> password;
                passwordIsValid = newAccount.set_username(password);
            } 

            //PIN Requirements
            std::cout << "    Pin Requirements    " << std::endl;
            std::cout << "========================" << std::endl;
            std::cout << "1. PIN must be 4 Digits " << std::endl;
            std::cout << "2. No White Spaces "      << std::endl;
            std::cout << "3. No other characters  " << std::endl;
            std::string PIN;
            std::cin >> PIN;

            //Code validates that the PIN is valid and correct
            bool PINisValid = newAccount.set_PIN(PIN);
            while(!PINisValid == false){
                std::cout << "PIN is Invalid. Please enter again." << std::endl;
                std::cin >> PIN;
                PINisValid = newAccount.set_PIN(PIN);
            }
            //Account Created and returns user login page
            loggin_menu();
            break;
        }
        case 2:{
            std::string username_entry;
            std::string password_entry;
            bool usernameValid = false;
            bool passwordValid = false;

            while(!usernameValid || !passwordValid){
                std::cout << "   Log In   " << std::endl;
                std::cout << "============" << std::endl;
                std::cout << "Username: "; std::cin >> username_entry;
                std::cout << "Password: "; std::cin >> password_entry;

                usernameValid = newAccount.validate_username(username_entry);
                passwordValid = newAccount.validate_password(password_entry);

                if(!usernameValid){
                    std::cout << "Incorrect Username. Try Again" << std::endl;
                }
                if(!passwordValid){
                    std::cout << "Incorrect Password. Try Again" << std::endl;
                }
            }
            std::cout << "Login Successful" << std::endl;
            main();
            break;
        }
        case 3: {
            // RESET USERNAME AND PASSWORD
            std::string userAccountNumber;
            std::cout << "   Reset Username and Password   " << std::endl;
            std::cout << "================================" << std::endl;
            std::cout << "Enter Account Number: "; std::cin >> userAccountNumber;
            std::cout << std::endl;

            bool userAccountValid = restAccount.rest_usernameAndPassword(userAccountNumber);
            while(!userAccountValid) { // Ensure proper updating of the userAccountValid flag
                std::cout << "Account Number is incorrect. Please Re-enter: ";
                std::cin >> userAccountNumber;
                userAccountValid = restAccount.rest_usernameAndPassword(userAccountNumber); // Update flag
            }
            break;
        }

        case 4:{
            exit(0);
        }
    }
}
