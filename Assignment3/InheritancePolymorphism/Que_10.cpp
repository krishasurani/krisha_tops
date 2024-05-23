//Write a program to concatenate the two strings using Operator Overloading

#include <iostream>
#include <cstring> // Include the <cstring> header for C-style string operations

class String {
private:
    char* str; // Dynamically allocated character array to store the string

public:
    // Default constructor
    String() {
        str = new char[1]; // Allocate memory for an empty string
        str[0] = '\0'; // Initialize to empty string
    }

    // Constructor with a const char* argument
    String(const char* s) {
        int len = strlen(s); // Calculate the length of the input string
        str = new char[len + 1]; // Allocate memory for the string
        strcpy(str, s); // Copy the input string
    }

    // Destructor to free dynamically allocated memory
    ~String() {
        delete[] str;
    }

    // Copy constructor
    String(const String& other) {
        int len = strlen(other.str);
        str = new char[len + 1];
        strcpy(str, other.str);
    }

    // Overloaded assignment operator
    String& operator=(const String& other) {
        if (this != &other) {
            delete[] str; // Free the existing memory
            int len = strlen(other.str);
            str = new char[len + 1];
            strcpy(str, other.str);
        }
        return *this;
    }

    // Overloaded + operator for string concatenation
    String operator+(const String& other) const {
        int len1 = strlen(str);
        int len2 = strlen(other.str);
        char* resultStr = new char[len1 + len2 + 2]; // +2 for the space and null terminator
        strcpy(resultStr, str); // Copy the current string
        strcat(resultStr, " "); // Add a space for separation
        strcat(resultStr, other.str); // Append the other string
        String result(resultStr);
        delete[] resultStr;
        return result;
    }

    // Function to display the string
    void display() const {
        std::cout << str << std::endl;
    }
};

int main() {
    String str1("Hello");
    String str2("World");

    String str3 = str1 + str2; // Use overloaded + operator

    std::cout << "String 1: ";
    str1.display();

    std::cout << "String 2: ";
    str2.display();

    std::cout << "Concatenated String: ";
    str3.display();

    return 0;
}
