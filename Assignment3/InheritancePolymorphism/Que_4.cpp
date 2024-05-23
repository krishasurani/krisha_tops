//write a C++ Program display Student Mark sheet using Multiple inheritance 

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

class Exam {
public:
    Exam(const string& subject, float marks) : subject(subject), marks(marks) {}

    void setSubject(const string& subject) {
        this->subject = subject;
    }

    string getSubject() const {
        return subject;
    }

    void setMarks(float marks) {
        this->marks = marks;
    }

    float getMarks() const {
        return marks;
    }

private:
    string subject;
    float marks;
};

class Student : public Person, public Exam {
public:
    Student(const string& name, int age, const string& subject, float marks)
        : Person(name, age), Exam(subject, marks) {}

    // No need for additional member functions here since inherited functions suffice
};

int main() {
    string name, subject;
    int age;
    float marks;

    cout << "Enter student's name: ";
    getline(cin, name);
    cout << "Enter student's age: ";
    cin >> age;
    cin.ignore();  // Clear input buffer

    cout << "Enter subject: ";
    getline(cin, subject);
    cout << "Enter marks: ";
    cin >> marks;
    cin.ignore();  // Clear input buffer

    Student student(name, age, subject, marks);

    cout << "\nStudent Mark Sheet:" << endl;
    cout << "Name: " << student.getName() << endl;
    cout << "Age: " << student.getAge() << endl;
    cout << "Subject: " << student.getSubject() << endl;
    cout << "Marks: " << student.getMarks() << endl;

    return 0;
}
