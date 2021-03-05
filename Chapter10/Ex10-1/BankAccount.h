#ifndef BANKACCOUNT_H_INCLUDED
#define BANKACCOUNT_H_INCLUDED

#include <string>

class BankAccount
{
private:
    std::string name;
    std::string acctnum;
    double balance;

public:
    BankAccount();
    BankAccount(const std::string & client, const std::string & num, double bal = 0.0);
    ~BankAccount();
    void show() const;
    void deposit(double cash);
    void withdraw(double cash);
};

#endif // BANKACCOUNT_H_INCLUDED
