//Write a C++ program to implement a class called Employee that has private member variables for name, 
//employee ID, and salary. Include member functions to calculate and set salary based on employee 
//performance. Using of constructor 

#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
  
  Employee(const string& name, int employeeId, double baseSalary) :
      name(name), employeeId(employeeId), baseSalary(baseSalary) {}

  void setSalary(double performanceRating) {
    if (performanceRating >= 0.0 && performanceRating <= 1.0) {
      salary = baseSalary * performanceRating;
    } else {
      cout << "Invalid performance rating. Salary remains unchanged." << endl;
      salary = baseSalary;
    }
  }

  string getName() const { return name; }
  int getEmployeeId() const { return employeeId; }
  double getSalary() const { return salary; }

private:
  string name;
  int employeeId;
  double baseSalary;
  double salary = 0.0; 
};

int main() {
  string employeeName = "John Doe";
  int employeeId = 12345;
  double baseSalary = 50000.0;

  Employee employee(employeeName, employeeId, baseSalary);

  double performanceRating = 0.8; 
  employee.setSalary(performanceRating);

  cout << "Employee Details:" << endl;
  cout << "Name: " << employee.getName() << endl;
  cout << "Employee ID: " << employee.getEmployeeId() << endl;
  cout << "Salary: $" << employee.getSalary() << endl;


  performanceRating = 1.5;
  employee.setSalary(performanceRating);

  return 0;
}
