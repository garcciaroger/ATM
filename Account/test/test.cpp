#include "gtest/gtest.h"

// Include the header file of the class you want to test
#include "/Account/account.h"

// Define test cases using the TEST macro
TEST(AccountTest, DepositTest) {
    // Create an instance of the Account class
    Account account;
    
    // Test deposit functionality
    EXPECT_TRUE(account.deposit(100.0)); // Expect deposit to be successful
    EXPECT_EQ(account.get_balance(), 100.0); // Expect balance to be 100.0 after deposit
}

// Define more test cases as needed...

// Define the main function to run all the tests
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
