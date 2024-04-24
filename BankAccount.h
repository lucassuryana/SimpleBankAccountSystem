#ifndef BANKACCOUNT_H
#define BANKACCOUT_H

#include <iostream>
#include <string>

using namespace std;

class BankAccount {
    private:
        // define variables
        string accountNumber;
        string accountHolderName;
        double balance;

    public:
        // define constructor of BankAccount
        BankAccount(string accNumber, string accHolderName, double bal);
        // define methods of the BankAccount class
        void deposit(double amount);
        void withdraw(double amount);
        void display();
        string getAccountHolderName(); //Added getter for account holder name
};

#endif