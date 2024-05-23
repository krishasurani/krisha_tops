//Write a C++ program to implement a class called Bank Account that has private member variables for 
//account number and balance. Include member functions to deposit and withdraw money from the account. 


#include <iostream>

class BankAccount {
 public:
  // Constructor to initialize account number and balance
  BankAccount(int accountNumber, double balance = 0.0) : accountNumber(accountNumber), balance(balance) {}

  // Function to get the current balance of the account
  double getBalance() const {
    return balance;
  }

  // Function to deposit money into the account
  bool deposit(double amount) {
    if (amount > 0) {
      balance += amount;
      return true;
    } else {
      return false;
    }
  }

  // Function to withdraw money from the account
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

  std::cout << "Initial balance: $" << myAccount.getBalance() << std::endl;

  double depositAmount = 50.0;
  if (myAccount.deposit(depositAmount)) {
    std::cout << "Deposit successful. New balance: $" << myAccount.getBalance() << std::endl;
  } else {
    std::cout << "Deposit failed." << std::endl;
  }

  double withdrawAmount = 75.0;
  if (myAccount.withdraw(withdrawAmount)) {
    std::cout << "Withdrawal successful. New balance: $" << myAccount.getBalance() << std::endl;
  } else {
    std::cout << "Withdrawal failed." << std::endl;
  }

  // Test trying to withdraw more than the balance
  double overdraftAmount = 150.0;
  if (myAccount.withdraw(overdraftAmount)) {
    std::cout << "Withdrawal successful. New balance: $" << myAccount.getBalance() << std::endl;
  } else {
    std::cout << "Withdrawal failed: Insufficient balance." << std::endl;
  }

  std::cout << "Final balance: $" << myAccount.getBalance() << std::endl;

  return 0;
}
