//Write a program to concatenate the two strings using Operator Overloading

#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
    char* str;

public:
    String() {
        str = new char[1];
        str[0] = '\0';
    }

    String(const char* s) {
        int len = strlen(s);
        str = new char[len + 1];
        strcpy(str, s);
    }

    ~String() {
        delete[] str;
    }

    String(const String& other) {
        int len = strlen(other.str);
        str = new char[len + 1];
        strcpy(str, other.str);
    }

    String& operator=(const String& other) {
        if (this != &other) {
            delete[] str;
            int len = strlen(other.str);
            str = new char[len + 1];
            strcpy(str, other.str);
        }
        return *this;
    }

    String operator+(const String& other) const {
        int len1 = strlen(str);
        int len2 = strlen(other.str);
        char* resultStr = new char[len1 + len2 + 2];
        strcpy(resultStr, str);
        strcat(resultStr, " ");
        strcat(resultStr, other.str);
        String result(resultStr);
        delete[] resultStr;
        return result;
    }

    void display() const {
        cout << str << endl;
    }
};

int main() {
    String str1("Hello");
    String str2("World");

    String str3 = str1 + str2;

    cout << "String 1: ";
    str1.display();

    cout << "String 2: ";
    str2.display();

    cout << "Concatenated String: ";
    str3.display();

    return 0;
}
