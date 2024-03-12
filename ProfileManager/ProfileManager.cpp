#include "ProfileManager.h"

void ProfileManager::saveCustomerProfile(const Account& account, const AccountOwner& owner, const AccountInformation& information) {
    std::string filename = generateFilename(owner.get_first_name(), account.get_account_number());
    std::string data = serialize(account, owner, information);

    std::ofstream file(filename);
    if (file.is_open()) {
        file << data;
    } else {
        std::cerr << "Unable to open file " << filename << " for writing." << std::endl;
    }
    file.close();
}

std::string ProfileManager::generateFilename(const std::string& name, const std::string& accountNumber) {
    std::stringstream filename;
    filename << name << "_" << accountNumber << ".txt";
    return filename.str();
}

std::string ProfileManager::serialize(const Account& account, const AccountOwner& owner, const AccountInformation& information) {
    std::stringstream data;
    data << "Profile Information " << std::endl;
    data << "===================" << std::endl;
    data << "Owner: " << owner.get_first_name() << " " << owner.get_last_name() << std::endl;
    data << "Email: " << owner.get_email_address() << std::endl;
    data << "Account Number: " << account.get_account_number() << std::endl;

    data << "\nAccount Information " << std::endl;
    data << "===================" << std::endl;
    data << "Username: " << information.get_username() << std::endl;
    data << "Password: " << information.get_password() << std::endl;
    data << "PIN: " << information.get_PIN() << std::endl;

    data << "\nAccount Details " << std::endl;
    data << "===================" << std::endl;
    data << "Checking Account Balance $: " << account.get_balance() << std::endl;

    return data.str();
}