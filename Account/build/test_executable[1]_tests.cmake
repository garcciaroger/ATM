add_test([=[AccountTest.FirstDepositTest]=]  /Users/rogergarcia/ATM/Account/build/test_executable [==[--gtest_filter=AccountTest.FirstDepositTest]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[AccountTest.FirstDepositTest]=]  PROPERTIES WORKING_DIRECTORY /Users/rogergarcia/ATM/Account/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  test_executable_TESTS AccountTest.FirstDepositTest)
