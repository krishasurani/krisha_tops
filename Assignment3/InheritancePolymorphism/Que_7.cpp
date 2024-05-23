//Write a C++ Program to illustrates the use of Constructors in multilevel inheritance 

#include <iostream>

using namespace std;

class Person {
public:
    Person(const string& name, int age) : name(name), age(age) {
        cout << "Person constructor called." << endl;
    }

private:
    string name;
    int age;
};

class Student : public Person {
public:
    Student(const string& name, int age, float gpa) : Person(name, age), gpa(gpa) {
        cout << "Student constructor called." << endl;
    }

private:
    float gpa;
};

class GraduateStudent : public Student {
public:
    GraduateStudent(const string& name, int age, float gpa, const string& researchArea)
        : Student(name, age, gpa), researchArea(researchArea) {
        cout << "GraduateStudent constructor called." << endl;
    }

private:
    string researchArea;
};

int main() {
    string name;
    int age;
    float gpa;
    string researchArea;

    cout << "Enter person's name: ";
    getline(cin, name);
    cout << "Enter person's age: ";
    cin >> age;
    cin.ignore();

    cout << "Enter student's GPA: ";
    cin >> gpa;
    cin.ignore();

    cout << "Enter graduate student's research area: ";
    getline(cin, researchArea);

    GraduateStudent gradStudent(name, age, gpa, researchArea);

    return 0;
}
