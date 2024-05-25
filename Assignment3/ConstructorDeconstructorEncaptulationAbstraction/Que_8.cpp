// Write a C++ program to implement a class called Student that has private 
// member variables for name, class, roll number, and marks. Include 
// member functions to calculate the grade based on the marks and display 
// the student's information. Accept address from each student implement 
// using of aggregation

#include <iostream>
#include <string>
using namespace std;
class Address {
private:
    string street, city, state;
public:
    Address( string street,  string city,  string state)
        : street(street), city(city), state(state) {}

    void display()  {
        cout << "Address: " << street << "," << city << "," << state << "\n";
    }
};
class Student {
private:
    string name,studentClass;
    int rollNumber, marks;
    Address address;
char calculateGrade() {
        if (marks >= 90) return 'A';
        else if (marks >= 80) return 'B';
        else if (marks >= 70) return 'C';
        else if (marks >= 60) return 'D';
        else return 'F';
    }
public:
    Student( string name,  string studentClass, int rollNumber, int marks,  Address address)
        : name(name), studentClass(studentClass), rollNumber(rollNumber), marks(marks), address(address) {}

    void display()  {
        cout << "Name: " << name << "\n";
        cout << "Class: " << studentClass << "\n";
        cout << "Roll Number: " << rollNumber << "\n";
        cout << "Marks: " << marks << "\n";
        cout << "Grade: " << calculateGrade() << "\n";
        address.display();
    }
};
int main() {
    string name;
    string studentClass;
    int rollNumber, marks;
    string street, city, state, zipCode;
    cout << "Enter student's name: ";
    getline(cin, name);
    cout << "Enter student's class: ";
    getline(cin, studentClass);
    cout << "Enter roll number: ";
    cin >> rollNumber;
    cout << "Enter marks: ";
    cin >> marks;
    cout << "Enter street: ";
    getline(cin, street);
    cout << "Enter city: ";
    getline(cin, city);
    cout << "Enter state: ";
    getline(cin, state);
    Address address(street, city, state);
    Student st(name, studentClass, rollNumber, marks, address);
    st.display();
}