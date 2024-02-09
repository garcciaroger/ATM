#include <gtest/gtest.h> // Include the Google Test framework header
#include "account.h"     // Include the header file of the class you want to test

/*
THIS TEST FUNCTION IS TO TEST OUT THE SETTER AND GETTER FOR ACCOUNT NUMBER
*/  
TEST(AccountTest, AccountNumber_testValid) {
    Account account;
    // Expected to pass test case since it's all int number and 12 characters
    EXPECT_TRUE(account.set_account_number("342068475012"));
    EXPECT_GT(account.get_account_number().length(), 0);
}

TEST(AccountTest, AccountNumber_testShortLength){
    Account account;
    // Expected false since account number is less than 12
    EXPECT_FALSE(account.set_account_number("34202"));
    EXPECT_GT(account.get_account_number().length(), 0);
}

TEST(AccountTest, AccountNumber_testInvalidCharacters){
    Account account;
    // Expected false since there are values aside numbers present
    EXPECT_FALSE(account.set_account_number("3420!@gf5012"));
    EXPECT_GT(account.get_account_number().length(), 0);
}

TEST(AccountTest, AccountNumber_testMaxValidLength){
    Account account;
    // Expected to return true since it meets all requirements
    EXPECT_TRUE(account.set_account_number("123456789111"));
    EXPECT_GT(account.get_account_number().length(), 0);
}
TEST(AccountTest, AccountNumber_testAllZeroes){
    Account account;
    // Expected true since it meets requirements
    EXPECT_TRUE(account.set_account_number("000000000000"));
    EXPECT_GT(account.get_account_number().length(), 0);
}
TEST(AccountTest, AccountNumber_testEmpty){
    Account account;
    // Expected false since it's empty
    EXPECT_FALSE(account.set_account_number(""));
    EXPECT_GT(account.get_account_number().length(), 0);
}
TEST(AccountTest, AccountNumber_testExceedsMaxLength){
    Account account;
    // Expected false since it goes over account number length
    EXPECT_FALSE(account.set_account_number("1234563434352789111"));
    EXPECT_GT(account.get_account_number().length(), 0);
}
TEST(AccountTest, AccountNumber_testRandomValid){
    Account account;
    // Expected true since it meets requirements
    EXPECT_TRUE(account.set_account_number("735195729582"));
    EXPECT_GT(account.get_account_number().length(), 0);
}
// // /*
// // THIS TEST FUNCTION IS TO TEST OUT THE SETTER AND GETTER FOR BALANCE
// // */ 
TEST(AccountTest, Balance_testPositive){
    Account account;
    EXPECT_TRUE(account.set_balance(50.50)); // Set a positive balance
    EXPECT_DOUBLE_EQ(account.get_balance(), 50.50); // Check if the balance is set correctly
}
TEST(AccountTest, Balance_testWholeNumber){
    Account account;
    EXPECT_TRUE(account.set_balance(100)); // Set a whole number balance
    EXPECT_DOUBLE_EQ(account.get_balance(), 100.00); // Check if the balance is set correctly
}
TEST(AccountTest, Balance_testNegative){
    Account account;
    EXPECT_FALSE(account.set_balance(-25.50)); // Expect failure due to negative balance
    EXPECT_DOUBLE_EQ(account.get_balance(), 0.0); // Check if the balance remains unchanged
}
// /*
// THIS FUNCTION IS TO TEST OUT THE DEOPSIT FUNCTION
// */
TEST(AccountTest, deposit_positiveAmount){
    Account account; // Instantiate the Account object
    bool deposit_result = account.deposit(500);
    EXPECT_TRUE(deposit_result);
    EXPECT_DOUBLE_EQ(account.get_balance(), 500.0); // Assuming initial balance is 0
}
TEST(AccountTest, deposit_negativeAmount){
    Account account; // Instantiate the Account object
    // Call the deposit function with a negative amount
    bool deposit_result = account.deposit(-100);
    // Assert that the deposit operation fails
    EXPECT_FALSE(deposit_result);
    // Verify that the balance remains unchanged
    EXPECT_DOUBLE_EQ(account.get_balance(), 0.0); // Assuming initial balance is 0
}
TEST(AccountTest, deposit_zeroAmount){
    Account account; // Instantiate the Account object
    // Call the deposit function with zero amount
    bool deposit_result = account.deposit(0);
    // Assert that the deposit operation fails
    EXPECT_FALSE(deposit_result);
    // Verify that the balance remains unchanged
    EXPECT_DOUBLE_EQ(account.get_balance(), 0.0); // Assuming initial balance is 0
}
TEST(AccountTest, deposit_multipleTimes){
    Account account; // Instantiate the Account object   
    // Deposit multiple times
    account.deposit(100);
    account.deposit(200);
    account.deposit(300);
    // Verify the final balance
    EXPECT_DOUBLE_EQ(account.get_balance(), 600.0); // Assuming initial balance is 0
}
/*
THIS FUNCTION IS TO TEST OUT THE WITHDRAW FUNCTION
*/
TEST(AccountTest, withdraw_validAmount){
    Account account; // Instantiate the Account object
    // Deposit some initial amount
    account.deposit(500);
    // Withdraw a valid amount
    account.withdraw(200);
    // Verify the final balance
    EXPECT_DOUBLE_EQ(account.get_balance(), 300.0); // Assuming initial balance is 500
}
TEST(AccountTest, withdraw_invalidAmount){
    Account account; // Instantiate the Account object
    // Deposit some initial amount
    account.deposit(500);
    
    // Verify that attempting to withdraw more than the balance throws an exception
    ASSERT_THROW(account.withdraw(700), std::invalid_argument);

    // Verify that the balance remains unchanged
    EXPECT_DOUBLE_EQ(account.get_balance(), 500.0); // Balance should remain the same
}
// Define the main function to run all the tests
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


