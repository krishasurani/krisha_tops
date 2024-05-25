//Write a C++ program to create a class called Car that has private member variables for company, model, 
//and year. Implement member functions to get and set these variables. 

#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string company;
    string model;
    int year;

public:
    Car() : company(""), model(""), year(0) {}

    Car(const string& comp, const string& mdl, int yr) : company(comp), model(mdl), year(yr) {}

    string getCompany() const {
        return company;
    }

    string getModel() const {
        return model;
    }

    int getYear() const {
        return year;
    }

    void setCompany(const string& comp) {
        company = comp;
    }

    void setModel(const string& mdl) {
        model = mdl;
    }

    void setYear(int yr) {
        year = yr;
    }
};

int main() {
    Car car1; 
    car1.setCompany("Ford");
    car1.setModel("Mustang");
    car1.setYear(2024);

    cout << "Car 1 Details:" << endl;
    cout << "Company: " << car1.getCompany() << endl;
    cout << "Model: " << car1.getModel() << endl;
    cout << "Year: " << car1.getYear() << endl;

    Car car2("Toyota", "Camry", 2022); 

    cout << "\nCar 2 Details:" << endl;
    cout << "Company: " << car2.getCompany() << endl;
    cout << "Model: " << car2.getModel() << endl;
    cout << "Year: " << car2.getYear() << endl;

    return 0;
}
