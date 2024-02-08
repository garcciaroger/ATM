#include<iostream>
#include"Account/account.h"

int main() {
    char choice;
    double deposit_amount = 0; // Move the initialization outside the switch statement
    bool isValid;

    do {
        Account Checkings;
        Account Savings;

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

            switch (option) {
                case 1: {
                    int accountOption = 0;
                    std::cout << "\nSelect Account to Deposit" << std::endl;
                    std::cout << "===========================" << std::endl;
                    std::cout << "1. Checkings " << std::endl;
                    std::cout << "2. Savings " << std::endl;
                    std::cout << "===========================" << std::endl;
                    std::cout << "Enter Option: ";
                    std::cin >> accountOption;

                    switch (accountOption) {
                        case 1: {
                            do {
                                std::cout << "Enter Deposit Amount - $";
                                std::cin >> deposit_amount;
                                isValid = Checkings.deposit(deposit_amount);
                                if (!isValid) {
                                    std::cout << "Deposit Unsuccessful! Insufficient funds or invalid amount." << std::endl;
                                }
                            } while (!isValid);
                            break;
                        }
                        case 2: {
                            do {
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
                case 2: {
                    int accountOption = 0;
                    std::cout << "\nSelect Account to Withdraw" << std::endl;
                    std::cout << "===========================" << std::endl;
                    std::cout << "1. Checkings " << std::endl;
                    std::cout << "2. Savings " << std::endl;
                    std::cout << "===========================" << std::endl;
                    std::cout << "Enter Option: ";
                    std::cin >> accountOption;

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
            std::cout << "Do you want to perform another transaction? (y/n): ";
            std::cin >> choice;
            if (choice != 'y' && choice != 'Y') {
                break; // Exit loop if user chooses not to continue
            }
        }
    } while (choice == 'y' || choice == 'Y');
    return 0;
}
