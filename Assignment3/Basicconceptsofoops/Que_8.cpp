//Write a C++ program to create a class called Person that has private member variables for name, age 
//and country. Implement member functions to set and get the values of these variables. 

#include <iostream>
#include <string>

class Person {
private:
  std::string name;
  int age;
  std::string country;

public:
  // Setters to assign values to private member variables
  void setName(const std::string& newName) {
    name = newName;
  }

  void setAge(int newAge) {
    // Optional: Add validation for age (e.g., non-negative) here
    age = newAge;
  }

  void setCountry(const std::string& newCountry) {
    country = newCountry;
  }

  // Getters to retrieve values of private member variables
  std::string getName() const {
    return name;
  }

  int getAge() const {
    return age;
  }

  std::string getCountry() const {
    return country;
  }
};

int main() {
  Person person;

  std::string name, country;
  int age;

  std::cout << "Enter name: ";
  std::getline(std::cin, name); // Use getline for names with spaces

  std::cout << "Enter age: ";
  std::cin >> age;

  std::cout << "Enter country: ";
  std::cin.ignore(); // Consume newline character after age input
  std::getline(std::cin, country);

  person.setName(name);
  person.setAge(age);
  person.setCountry(country);

  std::cout << "\nPerson Details:" << std::endl;
  std::cout << "Name: " << person.getName() << std::endl;
  std::cout << "Age: " << person.getAge() << std::endl;
  std::cout << "Country: " << person.getCountry() << std::endl;

  return 0;
}
