//
//  BankAccount.hpp
//  Project 1
//
//  Created by Sandeep Adhikari on 1/30/25.
//


# include "BankAccount.h"

BankAccount:: BankAccount(string newName, double sBalance, double chBalance){
    customerName = newName;
    savingsBalance = sBalance;
    checkingBalance = chBalance;
    
}
//Setters
void BankAccount:: SetName(string newName){
    customerName = newName;
    
}
void BankAccount::SetChecking(double balance){
    checkingBalance = balance;
}

void BankAccount::SetSaving(double balance){
    savingsBalance = balance;
    
}

//Getters

string BankAccount::GetName(){
    return customerName;
}
double BankAccount::GetSavings(){
    return savingsBalance;
}
double BankAccount:: GetChecking(){
    return checkingBalance;
}


//Transactions


void BankAccount::DepositChecking(double amt){
    if(amt >0){
        checkingBalance += amt;
    }
}

void BankAccount::DepositSaving(double amt){
    if(amt >0){
        savingsBalance += amt;
    }
}

void BankAccount:: WithdrawSavings(double amt){
    if(amt > 0){
        savingsBalance -= amt;
        
    }
}

void BankAccount::WithdrawChecking(double amt){
    if (amt > 0 && checkingBalance > amt)
        checkingBalance -= amt;
        
    
}


void BankAccount:: TransferToSavings(double amt){
    if(amt > 0){
        checkingBalance -= amt;
        savingsBalance += amt;
    }
}



