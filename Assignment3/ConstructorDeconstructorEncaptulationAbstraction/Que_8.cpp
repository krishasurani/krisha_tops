#include <iostream>
#include <string>
#include <map>
#include <limits>

class Address {
public:
    Address(const std::string& street, const std::string& city, const std::string& state, const std::string& zipcode) :
        street_(street), city_(city), state_(state), zipcode_(zipcode) {}

    std::string getFullAddress() const {
        return street_ + ", " + city_ + ", " + state_ + " " + zipcode_;
    }

private:
    std::string street_;
    std::string city_;
    std::string state_;
    std::string zipcode_;
};

class Student {
public:
    Student(const std::string& name, int studentClass, int rollNumber, double marks, const Address& address) :
        name_(name), studentClass_(studentClass), rollNumber_(rollNumber), marks_(marks), address_(address) {}

    std::string calculateGrade() const {
        const std::map<double, std::string, std::greater<double>> grading = {
            {90.0, "A"}, {80.0, "B"}, {70.0, "C"}, {60.0, "D"}, {0.0, "F"}
        };
        for (const auto& [threshold,grade]: grading) {
            if (marks_ >= threshold) {
                return grade;
            }
        }
        return "F"; // Default grade
    }

    void displayInformation() const {
        std::cout << "Name: " << name_ << std::endl;
        std::cout << "Class: " << studentClass_ << std::endl;
        std::cout << "Roll Number: " << rollNumber_ << std::endl;
        std::cout << "Marks: " << marks_ << std::endl;
        std::cout << "Grade: " << calculateGrade() << std::endl;
        std::cout << "Address: " << address_.getFullAddress() << std::endl;
        std::cout << "------------------------------" << std::endl;
    }

private:
    std::string name_;
    int studentClass_;
    int rollNumber_;
    double marks_;
    Address address_;
};

// Function to prompt user for input
template<typename T>
T promptInput(const std::string& prompt) {
    T value;
    std::cout << prompt;
    std::cin >> value;
    while (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Please try again: ";
        std::cin >> value;
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return value;
}

int main() {
    std::string name, street, city, state, zipcode;
    int studentClass, rollNumber;
    double marks;

    name = promptInput<std::string>("Enter student name: ");
    studentClass = promptInput<int>("Enter student class: ");
    rollNumber = promptInput<int>("Enter roll number: ");

    marks = promptInput<double>("Enter marks: ");
    while (marks < 0 || marks > 100) {
        std::cout << "Marks should be between 0 and 100. Enter again: ";
        marks = promptInput<double>("");
    }

    street = promptInput<std::string>("Enter street address: ");
    city = promptInput<std::string>("Enter city: ");
    state = promptInput<std::string>("Enter state: ");
    zipcode = promptInput<std::string>("Enter zipcode: ");

    Address studentAddress(street, city, state, zipcode);
    Student student(name, studentClass, rollNumber, marks, studentAddress);

    student.displayInformation();

    return 0;
}
 