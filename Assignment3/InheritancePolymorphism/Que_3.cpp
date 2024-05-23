// Create a class person having members name and age. Derive a class student having member percentage. 
// Derive another class teacher having member salary. Write necessary member function to initialize, read 
// and write data. Write also Main function (Multiple Inheritance) 

#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    Person(const string& name, int age) : name(name), age(age) {}

    void setName(const string& name) {
        this->name = name;
    }

    string getName() const {
        return name;
    }

    void setAge(int age) {
        this->age = age;
    }

    int getAge() const {
        return age;
    }

private:
    string name;
    int age;
};

class Student {
public:
    Student(const Person& person, float percentage) : person(person), percentage(percentage) {}

    void setPerson(const Person& person) {
        this->person = person;
    }

    const Person& getPerson() const {
        return person;
    }

    void setPercentage(float percentage) {
        this->percentage = percentage;
    }

    float getPercentage() const {
        return percentage;
    }

private:
    Person person;
    float percentage;
};

class Teacher {
public:
    Teacher(const Person& person, float salary) : person(person), salary(salary) {}

    void setPerson(const Person& person) {
        this->person = person;
    }

    const Person& getPerson() const {
        return person;
    }

    void setSalary(float salary) {
        this->salary = salary;
    }

    float getSalary() const {  // Consider using a non-negative data type for salary (e.g., unsigned float)
        return salary;
    }

private:
    Person person;
    float salary;
};

int main() {
    string name;
    int age;
    float percentage, salary;

    cout << "Enter person's name: ";
    getline(cin, name);
    cout << "Enter person's age: ";
    cin >> age;
    cin.ignore();  // Clear input buffer

    cout << "Enter student's percentage: ";
    cin >> percentage;
    cin.ignore();  // Clear input buffer

    cout << "Enter teacher's salary: ";
    cin >> salary;
    cin.ignore();  // Clear input buffer

    Person person(name, age);
    Student student(person, percentage);
    Teacher teacher(person, salary);

    cout << "\nStudent Details:" << endl;
    cout << "Name: " << student.getPerson().getName() << endl;
    cout << "Age: " << student.getPerson().getAge() << endl;
    cout << "Percentage: " << student.getPercentage() << endl;

    cout << "\nTeacher Details:" << endl;
    cout << "Name: " << teacher.getPerson().getName() << endl;
    cout << "Age: " << teacher.getPerson().getAge() << endl;
    cout << "Salary: " << teacher.getSalary() << endl;

    return 0;
}
