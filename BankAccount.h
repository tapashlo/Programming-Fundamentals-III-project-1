//
//  BankAccount.hpp
//  Project 1
//
//  Created by Sandeep Adhikari on 1/30/25.
//

#ifndef BankAccount_H
#define BankAccount_H
#include <string>
using namespace std;

class BankAccount{
private:
    string customerName;
    double savingsBalance;
    double checkingBalance;

public:
    //Creating a Constructor
    
    BankAccount(string newName, double sBalance, double chBalance);
    
    //Creating setters
    
    void SetName(string newName);
    void SetChecking(double balance);
    void SetSaving(double balance);
    
    
    //Getters
    
    string GetName();
    double GetSavings();
    double GetChecking();
    
    
    //Transactions
    
    void DepositChecking(double amt);
    void DepositSaving(double amt);
    void WithdrawChecking(double amt);
    void WithdrawSavings(double amt);
    void TransferToSavings(double amt);
    
};

#endif /* BankAccount_hpp */




