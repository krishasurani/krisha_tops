//Define a class to represent a bank account. Include the following members: 
//Data Member: -Name of the depositor -Account Number 
//             -Type of Account -Balance amount in the account  
//Member Functions -To assign values 
//               -To deposited an amount 
//               -To withdraw an amount after checking balance 
//               -To display name and balance

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
  string name;
  int accountNumber;
  string accountType;
  double balance;

public:
  
  BankAccount(const string& accountName, int accNum, const string& type) :
      name(accountName), accountNumber(accNum), accountType(type), balance(0.0) {}

  void deposit(double amount) {
    if (amount > 0) {
      balance += amount;
      cout << "Deposit Successful! New balance: " << balance << endl;
    } else {
      cout << "Invalid deposit amount. Please enter a positive value." << endl;
    }
  }

  
  void withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
      balance -= amount;
      cout << "Withdrawal Successful! New balance: " << balance << endl;
    } else {
      cout << "Insufficient funds or invalid withdrawal amount." << endl;
    }
  }


  void display() {
    cout << "Account Name: " << name << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Account Type: " << accountType << endl;
    cout << "Balance: " << balance << endl;
  }
};

int main() {
  
  string accountName, accountType;
  int accountNumber;

  cout << "Enter account holder name: ";
  getline(cin, accountName);

  cout << "Enter account number: ";
  cin >> accountNumber;

  cout << "Enter account type (e.g., Savings, Checking): ";
  cin >> accountType;
  cin.ignore(); 

  BankAccount account(accountName, accountNumber, accountType);

  account.display();

  double depositAmount;
  cout << "Enter amount to deposit: ";
  cin >> depositAmount;
  account.deposit(depositAmount);

  
  double withdrawAmount;
  cout << "Enter amount to withdraw: ";
  cin >> withdrawAmount;
  account.withdraw(withdrawAmount);

  account.display();

  return 0;
}
