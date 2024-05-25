//Write a C++ program to implement a class called Bank Account that has private member variables for 
//account number and balance. Include member functions to deposit and withdraw money from the account. 


#include <iostream>
using namespace std;

class BankAccount {
 public:
  BankAccount(int accountNumber, double balance = 0.0) : accountNumber(accountNumber), balance(balance) {}

  double getBalance() const {
    return balance;
  }

  bool deposit(double amount) {
    if (amount > 0) {
      balance += amount;
      return true;
    } else {
      return false;
    }
  }

  bool withdraw(double amount) {
    if (amount <= balance) {
      balance -= amount;
      return true;
    } else {
      return false;
    }
  }

 private:
  int accountNumber;
  double balance;
};

int main() {
  int accountNumber = 123456;
  double initialBalance = 100.0;

  BankAccount myAccount(accountNumber, initialBalance);

  cout << "Initial balance: $" << myAccount.getBalance() << endl;

  double depositAmount = 50.0;
  if (myAccount.deposit(depositAmount)) {
    cout << "Deposit successful. New balance: $" << myAccount.getBalance() << endl;
  } else {
    cout << "Deposit failed." << endl;
  }

  double withdrawAmount = 75.0;
  if (myAccount.withdraw(withdrawAmount)) {
    cout << "Withdrawal successful. New balance: $" << myAccount.getBalance() << endl;
  } else {
    cout << "Withdrawal failed." << endl;
  }


  double overdraftAmount = 150.0;
  if (myAccount.withdraw(overdraftAmount)) {
    cout << "Withdrawal successful. New balance: $" << myAccount.getBalance() << endl;
  } else {
    cout << "Withdrawal failed: Insufficient balance." << endl;
  }

  cout << "Final balance: $" << myAccount.getBalance() << endl;

  return 0;
}
