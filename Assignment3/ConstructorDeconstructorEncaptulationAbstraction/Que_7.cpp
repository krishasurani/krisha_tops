//Write a C++ program to implement a class called Date that has private member variables for day, month, 
//and year. Include member functions to set and get these variables, as well as to validate if the date 
//is valid

#include <iostream>

class Date {
public:
  // Constructor to initialize with default values (optional)
  Date() : day_(1), month_(1), year_(1900) {}

  // Constructor to initialize with specific values
  Date(int day, int month, int year) {
    // Set date and handle potential invalidity in setDate
    if (!setDate(day, month, year)) {
      std::cerr << "Error: Invalid date provided. Using default values (1/1/1900)." << std::endl;
    }
  }

  // Setter function to set day, month, and year (with validation)
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

  // Getter functions for day, month, and year
  int getDay() const { return day_; }
  int getMonth() const { return month_; }
  int getYear() const { return year_; }

  // Function to check if the date is valid
  bool isValidDate(int day, int month, int year) const {
    if (year < 1000 || year > 9999) {
      return false; // Year out of range
    }
    if (month < 1 || month > 12) {
      return false; // Month out of range
    }

    // Check for days in each month (considering leap years)
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
  // Helper function to check for leap year
  bool isLeapYear(int year) const {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
  }

  int day_;
  int month_;
  int year_;
};

int main() {
  // Create a Date object with default constructor
  Date defaultDate;
  std::cout << "Default date: " << defaultDate.getDay() << "/" << defaultDate.getMonth() << "/" << defaultDate.getYear() << std::endl;

  // Create a Date object with valid date
  Date validDate(25, 12, 2023);
  std::cout << "Valid date: " << validDate.getDay() << "/" << validDate.getMonth() << "/" << validDate.getYear() << std::endl;

  // Create a Date object with invalid date (handled in setDate)
  Date invalidDate(31, 2, 2024); // February only has 29 days in a leap year
  std::cout << "Invalid date: ";
}
