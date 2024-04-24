#include "BankAccount.h"

BankAccount::BankAccount(string accNumber, string accHolderName, double bal) {
    accountNumber = accNumber;
    accountHolderName = accHolderName;
    balance = bal;
}

void BankAccount::deposit(double amount) {
    balance += amount;
    cout << "Deposit of $" << amount << " successful." << endl;
}

void BankAccount::withdraw(double amount) {
    if (balance >= amount) {
        balance -= amount;
        cout << "Withdrawal of $" << amount << " succesful." << endl;
    } else {
        cout << "Insufficient balance." << endl;
    }
}

void BankAccount::display() {
    cout << "Account Number: " << accountNumber << endl;
    cout << "Account Holder Number: " << accountHolderName << endl;
    cout << "Balance: $" << balance << endl;
}

string BankAccount::getAccountHolderName() {
    return accountHolderName;
}