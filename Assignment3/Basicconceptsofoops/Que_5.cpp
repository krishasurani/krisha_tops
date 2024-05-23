//Define a class to represent a bank account. Include the following members: 
//Data Member: -Name of the depositor -Account Number 
//             -Type of Account -Balance amount in the account  
//Member Functions -To assign values 
//               -To deposited an amount 
//               -To withdraw an amount after checking balance 
//               -To display name and balance

#include <iostream>
#include <string>

class BankAccount {
private:
  std::string name;
  int accountNumber;
  std::string accountType;
  double balance;

public:
  // Constructor to initialize account details (assuming initial balance is 0)
  BankAccount(const std::string& accountName, int accNum, const std::string& type) :
      name(accountName), accountNumber(accNum), accountType(type), balance(0.0) {}

  // Deposit an amount
  void deposit(double amount) {
    if (amount > 0) {
      balance += amount;
      std::cout << "Deposit Successful! New balance: " << balance << std::endl;
    } else {
      std::cout << "Invalid deposit amount. Please enter a positive value." << std::endl;
    }
  }

  // Withdraw an amount after checking balance
  void withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
      balance -= amount;
      std::cout << "Withdrawal Successful! New balance: " << balance << std::endl;
    } else {
      std::cout << "Insufficient funds or invalid withdrawal amount." << std::endl;
    }
  }

  // Display account name and balance
  void display() {
    std::cout << "Account Name: " << name << std::endl;
    std::cout << "Account Number: " << accountNumber << std::endl;
    std::cout << "Account Type: " << accountType << std::endl;
    std::cout << "Balance: " << balance << std::endl;
  }
};

int main() {
  // Create a bank account object
  std::string accountName, accountType;
  int accountNumber;

  std::cout << "Enter account holder name: ";
  std::getline(std::cin, accountName);

  std::cout << "Enter account number: ";
  std::cin >> accountNumber;

  std::cout << "Enter account type (e.g., Savings, Checking): ";
  std::cin >> accountType;
  std::cin.ignore(); // Consume newline character after account type input

  BankAccount account(accountName, accountNumber, accountType);

  // Display initial balance
  account.display();

  // Simulate a deposit
  double depositAmount;
  std::cout << "Enter amount to deposit: ";
  std::cin >> depositAmount;
  account.deposit(depositAmount);

  // Simulate a withdrawal
  double withdrawAmount;
  std::cout << "Enter amount to withdraw: ";
  std::cin >> withdrawAmount;
  account.withdraw(withdrawAmount);

  // Display final balance
  account.display();

  return 0;
}
