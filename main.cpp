#include <iostream>
#include "BankAccount.h"

using namespace std;

int main() {
    // Create a bank account for Lucas
    BankAccount lucasaccount("12345", "Lucas Suryana", 1000.0);

    // Display Lucas's account details
    cout << "Welcome, " << lucasaccount.getAccountHolderName() << "!" << endl;

    // Interactively desposit and withdraw money
    char choice;
    double amount;
    do {
        cout << "\nChoose an option" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Display Account Details" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: " << endl;
        cin >> choice;

        switch (choice) {
            case '1':
                cout << "Enter the amount to deposit: $";
                cin >> amount;
                lucasaccount.deposit(amount);
                break;
            case '2':
                cout << "Enter the amount to withdraw: $";
                cin >> amount;
                lucasaccount.withdraw(amount);
                break;
            case '3':
                lucasaccount.display();
                break;
            case '4':
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != '4');

    return 0;
}