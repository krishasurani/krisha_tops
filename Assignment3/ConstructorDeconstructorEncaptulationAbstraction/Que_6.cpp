//Write a C++ program to implement a class called Employee that has private member variables for name, 
//employee ID, and salary. Include member functions to calculate and set salary based on employee 
//performance. Using of constructor 

#include <iostream>
#include <string>

class Employee {
public:
  // Constructor to initialize name, ID, and base salary
  Employee(const std::string& name, int employeeId, double baseSalary) :
      name(name), employeeId(employeeId), baseSalary(baseSalary) {}

  // Function to set salary based on performance rating (with basic validation)
  void setSalary(double performanceRating) {
    if (performanceRating >= 0.0 && performanceRating <= 1.0) {
      salary = baseSalary * performanceRating;
    } else {
      std::cout << "Invalid performance rating. Salary remains unchanged." << std::endl;
      salary = baseSalary; // Ensure salary doesn't change for invalid rating
    }
  }

  // Getters for name, ID, and salary
  std::string getName() const { return name; }
  int getEmployeeId() const { return employeeId; }
  double getSalary() const { return salary; }

private:
  std::string name;
  int employeeId;
  double baseSalary;
  double salary = 0.0; // Initialize salary to 0 in constructor
};

int main() {
  std::string employeeName = "John Doe";
  int employeeId = 12345;
  double baseSalary = 50000.0;

  Employee employee(employeeName, employeeId, baseSalary);

  double performanceRating = 0.8; // Example performance rating (valid)
  employee.setSalary(performanceRating);

  std::cout << "Employee Details:" << std::endl;
  std::cout << "Name: " << employee.getName() << std::endl;
  std::cout << "Employee ID: " << employee.getEmployeeId() << std::endl;
  std::cout << "Salary: $" << employee.getSalary() << std::endl;

  // Example of invalid performance rating
  performanceRating = 1.5;
  employee.setSalary(performanceRating);

  return 0;
}
