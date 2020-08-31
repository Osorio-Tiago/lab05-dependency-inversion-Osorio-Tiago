//
// Created by Maikol Guzman on 8/24/20.
//

#include <BankTransferSender.h>
#include <Person.h>
#include <CashSender.h>
#include <CheckSender.h>
#include "gtest/gtest.h"

TEST(PersonTestSuite, VerifyProcessPayment){
    Person person;
    ISender* bank = new BankTransferSender();
    ISender* check = new CheckSender();
    ISender* cash = new CashSender();
    EXPECT_EQ(person.processPayment(bank), "Sending the money by transference");
    EXPECT_EQ(person.processPayment(cash), "Give the money in the hands");
    EXPECT_EQ(person.processPayment(check), "Sending the check with the money");
}


