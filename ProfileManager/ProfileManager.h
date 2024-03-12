#pragma once
#include <fstream>
#include <iostream>
#include <sstream>
#include "account.h"
#include "owner.h"
#include "login.h"

class ProfileManager {
public:
    void saveCustomerProfile(const Account& account, const AccountOwner& owner, const AccountInformation& information);
private:
    std::string generateFilename(const std::string& name, const std::string& accountNumber);
    std::string serialize(const Account& account, const AccountOwner& owner, const AccountInformation& information);
};

