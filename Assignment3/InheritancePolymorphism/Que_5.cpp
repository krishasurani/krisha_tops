// Assume that the test results of a batch of students are stored in three different classes. Class 
// Students are storing the roll number. Class Test stores the marks obtained in two subjects and class 
// result contains the total marks obtained in the test. The class result can inherit the details of the 
// marks obtained in the test and roll number of students. (Multilevel Inheritance)

#include <iostream>

using namespace std;

class Student {
public:
    int rollNumber;

    void setRollNumber(int rollNumber) {
        this->rollNumber = rollNumber;
    }

    int getRollNumber() const {
        return rollNumber;
    }
};

class Test {
public:
    float subject1Marks;
    float subject2Marks;

    void setMarks(float subject1Marks, float subject2Marks) {
        this->subject1Marks = subject1Marks;
        this->subject2Marks = subject2Marks;
    }

    float getSubject1Marks() const {
        return subject1Marks;
    }

    float getSubject2Marks() const {
        return subject2Marks;
    }
};

class Result : public Test, public Student {
public:
    float totalMarks;

    void calculateTotalMarks() {
        totalMarks = subject1Marks + subject2Marks;
    }

    void displayResult() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Subject 1 Marks: " << subject1Marks << endl;
        cout << "Subject 2 Marks: " << subject2Marks << endl;
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() {
    int rollNumber, subject1Marks, subject2Marks;

    cout << "Enter student's roll number: ";
    cin >> rollNumber;

    cout << "Enter marks for subject 1: ";
    cin >> subject1Marks;

    cout << "Enter marks for subject 2: ";
    cin >> subject2Marks;

    Result studentResult;
    studentResult.setRollNumber(rollNumber);
    studentResult.setMarks(subject1Marks, subject2Marks);
    studentResult.calculateTotalMarks();

    cout << "\nStudent Test Results:" << endl;
    studentResult.displayResult();

    return 0;
}
