//
// Created by santi on 8/31/2020.
//

#ifndef MY_PROJECT_NAME_SENDER_H
#define MY_PROJECT_NAME_SENDER_H
#include <iostream>
using namespace std;

class ISender
{
public:
    virtual string sendPayment() = 0;
};
#endif //MY_PROJECT_NAME_SENDER_H
