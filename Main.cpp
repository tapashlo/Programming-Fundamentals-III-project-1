//
//  BankAccount.hpp
//  Project 1
//
//  Created by Sandeep Adhikari on 1/30/25.
//


#include <iostream>
#include <iomanip>
#include "BankAccount.h"
#include <limits>

using namespace std;

// Function to clear input buffer
void clearInputBuffer() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main() {
    
    // Create a bank account with initial values

    BankAccount account("John Doe", 1000.0, 500.0);
    int choice;
    double amount;

    // Output formatting for double values 

    cout << fixed << setprecision(2);

    do {
        // Display menu
        cout << "\nBank Account Menu for " << account.GetName() << endl;
        cout << "--------------------------------" << endl;
        cout << "1. Display Account Balance" << endl;
        cout << "2. Deposit to Checking" << endl;
        cout << "3. Deposit to Savings" << endl;
        cout << "4. Withdraw from Checking" << endl;
        cout << "5. Withdraw from Savings" << endl;
        cout << "6. Transfer to Savings" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        
        // Getting Input from the User

        while (!(cin >> choice)) {
            cout << "Invalid input. Please enter a number: ";
            clearInputBuffer();
        }

        // Operation of the Menu Choices:


        switch (choice) {
            case 1: // Display balances

                cout << "\nCurrent Balances:" << endl;
                cout << "Checking Balance: $" << account.GetChecking() << endl;
                cout << "Savings Balance: $" << account.GetSavings() << endl;
                break;

            case 2: // Deposit Checking Amount

                cout << "Enter amount to deposit to checking: $";
                if (cin >> amount) {
                    account.DepositChecking(amount);
                    cout << "Deposit successful. New checking balance: $"
                         << account.GetChecking() << endl;
                } else {
                    cout << "Invalid amount entered." << endl;
                    clearInputBuffer();
                }
                break;

            case 3: // Deposit Savings Account 

                cout << "Enter amount to deposit to savings: $";
                if (cin >> amount) {
                    account.DepositSaving(amount);
                    cout << "Deposit successful. New savings balance: $"
                         << account.GetSavings() << endl;
                } else {
                    cout << "Invalid amount entered." << endl;
                    clearInputBuffer();
                }
                break;

            case 4: // Withdraw from Checking

                cout << "Enter amount to withdraw from checking: $";
                if (cin >> amount) {
                    account.WithdrawChecking(amount);
                    cout << "Withdrawal successful. New checking balance: $"
                         << account.GetChecking() << endl;
                } else {
                    cout << "Invalid amount entered." << endl;
                    clearInputBuffer();
                }
                break;

            case 5: // Withdraw from Savings

                cout << "Enter amount to withdraw from savings: $";
                if (cin >> amount) {
                    account.WithdrawSavings(amount);
                    cout << "Withdrawal successful. New savings balance: $"
                         << account.GetSavings() << endl;
                } else {
                    cout << "Invalid amount entered." << endl;
                    clearInputBuffer();
                }
                break;

            case 6: // Transfer to Savings

                cout << "Enter amount to transfer to savings: $";
                if (cin >> amount) {
                    account.TransferToSavings(amount);
                    cout << "Transfer successful." << endl;
                    cout << "New checking balance: $" << account.GetChecking() << endl;
                    cout << "New savings balance: $" << account.GetSavings() << endl;
                } else {
                    cout << "Invalid amount entered." << endl;
                    clearInputBuffer();
                }
                break;

            case 0: // Exit and Display Exit Message

                cout << "\nThank you for using our banking system!" << endl;
                break;

            default:
                cout << "\nInvalid choice. Please try again." << endl;
        }
    } while (choice != 0);

    return 0;
}
