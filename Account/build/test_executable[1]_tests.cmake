add_test([=[AccountTest.withdraw_validAmount]=]  /Users/rogergarcia/ATM/Account/build/test_executable [==[--gtest_filter=AccountTest.withdraw_validAmount]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[AccountTest.withdraw_validAmount]=]  PROPERTIES WORKING_DIRECTORY /Users/rogergarcia/ATM/Account/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[AccountTest.withdraw_invalidAmount]=]  /Users/rogergarcia/ATM/Account/build/test_executable [==[--gtest_filter=AccountTest.withdraw_invalidAmount]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[AccountTest.withdraw_invalidAmount]=]  PROPERTIES WORKING_DIRECTORY /Users/rogergarcia/ATM/Account/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  test_executable_TESTS AccountTest.withdraw_validAmount AccountTest.withdraw_invalidAmount)