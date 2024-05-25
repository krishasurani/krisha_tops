//Write a C++ Program to show access to Private Public and Protected using Inheritance 

#include <iostream>
using namespace std;

class Base {
public:
    int publicMember; 

protected:
    int protectedMember; 

private:
    int privateMember; 
};

class Derived : public Base {
public:
    void accessPublicMember() {
        cout << "Public member (from Base): " << publicMember << endl;
    }

    void accessProtectedMember() {
        cout << "Protected member (from Base): " << protectedMember << endl;
    }

};

int main() {
    Derived derivedObject;

    derivedObject.publicMember = 10;
    cout << "Public member (accessed directly): " << derivedObject.publicMember << endl;

    derivedObject.accessProtectedMember();

    return 0;
}
