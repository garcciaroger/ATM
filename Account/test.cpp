#include <gtest/gtest.h> // Include the Google Test framework header
#include "account.h"     // Include the header file of the class you want to test















// Define test cases using the TEST macro
// TEST(AccountTest, FirstDepositTest) {
//     // Create an instance of the Account class
//     Account account;
    
//     // Test deposit functionality
//     EXPECT_TRUE(account.deposit(100)); // Expect deposit to be successful
//     EXPECT_GT(account.get_balance(), 0.0); // Check if get_balance() returns a value greater than 0 after deposit
// }

// TEST(AccountTest, SecondDepositTest) {
//     // Create an instance of the Account class
//     Account account;
    
//     // Test deposit functionality
//     EXPECT_TRUE(account.deposit(50.25)); // Expect deposit to be successful
//     EXPECT_GT(account.get_balance(), 0.0); // Check if get_balance() returns a value greater than 0 after deposit
// }

// Define the main function to run all the tests
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


