//Write a C++ program to create a class called Person that has private member variables for name, age 
//and country. Implement member functions to set and get the values of these variables. 

#include <iostream>
#include <string>
using namespace std;

class Person {
private:
  string name;
  int age;
  string country;

public:
  
  void setName(const string& newName) {
    name = newName;
  }

  void setAge(int newAge) {
    
    age = newAge;
  }

  void setCountry(const string& newCountry) {
    country = newCountry;
  }

  string getName() const {
    return name;
  }

  int getAge() const {
    return age;
  }

  string getCountry() const {
    return country;
  }
};

int main() {
  Person person;

  string name, country;
  int age;

  cout << "Enter name: ";
  getline(cin, name); 

  cout << "Enter age: ";
  cin >> age;

  cout << "Enter country: ";
  cin.ignore(); 
  getline(cin, country);

  person.setName(name);
  person.setAge(age);
  person.setCountry(country);

  cout << "\nPerson Details:" << endl;
  cout << "Name: " << person.getName() << endl;
  cout << "Age: " << person.getAge() << endl;
  cout << "Country: " << person.getCountry() << endl;

  return 0;
}
