#include"owner.h"
bool AccountOwner::gather_customer_information(){
    std::string first_name;
    std::string last_name;
    std::string phone_number;
    std::string street_address;
    std::string city;
    std::string state;
    std::string zip_code;

    std::cout << "        New Account     " << std::endl;
    std::cout << "========================" << std::endl;

    std::cout << "Enter First Name - "; 
    std::cin.ignore(); // Clear any remaining newline characters
    std::getline(std::cin, first_name);
    if (!set_first_name(first_name)) {
        std::cerr << "Invalid first name!" << std::endl;
        return false; // Gathering failed
    }

    std::cout << "Enter Last Name - ";
    std::getline(std::cin, last_name);
    if (!set_last_name(last_name)) {
        std::cerr << "Invalid last name!" << std::endl;
        return false; // Gathering failed
    }

    std::cout << "Enter Phone Number - "; 
    std::getline(std::cin, phone_number);
    if (!set_phone_number(phone_number)) {
        std::cerr << "Invalid phone number!" << std::endl;
        return false; // Gathering failed
    }

    std::cout << "Enter Street Address - "; 
    std::getline(std::cin, street_address);
    if (!set_street_address(street_address)) {
        std::cerr << "Invalid street address!" << std::endl;
        return false; // Gathering failed
    }

    std::cout << "Enter City - "; 
    std::getline(std::cin, city);
    if (!set_city(city)) {
        std::cerr << "Invalid city!" << std::endl;
        return false; // Gathering failed
    }

    std::cout << "Enter State - "; 
    std::getline(std::cin, state);
    if (!set_state(state)) {
        std::cerr << "Invalid state!" << std::endl;
        return false; // Gathering failed
    }

    std::cout << "Enter Zip Code - "; 
    std::getline(std::cin, zip_code);
    if (!set_zip_code(zip_code)) {
        std::cerr << "Invalid zip code!" << std::endl;
        return false; // Gathering failed
    }

    std::cout << std::endl;
    return true; // Gathering successful
}

