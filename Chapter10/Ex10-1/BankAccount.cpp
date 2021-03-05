#include <iostream>
#include "BankAccount.h"

BankAccount::BankAccount()
{
    name = "no name";
    acctnum = "no account number";
    balance = 0.0;
}

BankAccount::BankAccount(const std::string & client, const std::string & num, double bal)
{
    name = client;
    acctnum = num;
    balance = bal;
}

BankAccount::~BankAccount()
{
    std::cout << "\nUsing a destructor\n" << "Bye " << name << std::endl;
}

void BankAccount::show() const
{
    std::cout << "Name: " << name << std::endl
              << "Account number: " <<  acctnum << std::endl
              << "Balance: " << balance << std::endl;
}

void BankAccount::deposit(double cash)
{
    balance += cash;
}

void BankAccount::withdraw(double cash)
{
    if(cash > balance)
        std::cout << "You can't withdraw more money than you have\n";
    else
        balance -= cash;
}
