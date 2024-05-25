//Write a C++ program to implement a class called Date that has private member variables for day, month, 
//and year. Include member functions to set and get these variables, as well as to validate if the date 
//is valid

#include <iostream>
using namespace std;

class Date {
public:
  
  Date() : day_(1), month_(1), year_(1900) {}

  
  Date(int day, int month, int year) {
    
    if (!setDate(day, month, year)) {
      cerr << "Error: Invalid date provided. Using default values (1/1/1900)." << endl;
    }
  }

  bool setDate(int day, int month, int year) {
    if (isValidDate(day, month, year)) {
      day_ = day;
      month_ = month;
      year_ = year;
      return true;
    } else {
      return false;
    }
  }


  int getDay() const { return day_; }
  int getMonth() const { return month_; }
  int getYear() const { return year_; }

  
  bool isValidDate(int day, int month, int year) const {
    if (year < 1000 || year > 9999) {
      return false; 
    }
    if (month < 1 || month > 12) {
      return false; 
    }

    int maxDays = (month == 4 || month == 6 || month == 9 || month == 11) ? 30 : 31;
    if (month == 2) {
      if (isLeapYear(year)) {
        maxDays = 29;
      } else {
        maxDays = 28;
      }
    }
    return (day > 0 && day <= maxDays);
  }

private:
  
  bool isLeapYear(int year) const {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
  }

  int day_;
  int month_;
  int year_;
};

int main() {
  
  Date defaultDate;
  cout << "Default date: " << defaultDate.getDay() << "/" << defaultDate.getMonth() << "/" << defaultDate.getYear() << endl;

  Date validDate(25, 12, 2023);
  cout << "Valid date: " << validDate.getDay() << "/" << validDate.getMonth() << "/" << validDate.getYear() << endl;

  Date invalidDate(31, 2, 2024); 
  cout << "Invalid date: ";
}
