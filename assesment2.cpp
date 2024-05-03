#include<iostream>
#include<cmath> 

class Event {
private:
    std::string eventName;
    std::string firstName;
    std::string lastName;
    int numberOfGuests;
    int numberOfMinutes;
    int numberOfServers;

    const double CostPerHour = 18.50;
    const double CostPerMinute = 0.40;
    const double CostOfDinner = 20.70;

public:
    Event() {
        eventName = "";
        firstName = "";
        lastName = "";
        numberOfGuests = 0;
        numberOfMinutes = 0;
        numberOfServers = 0;
    }

    void inputEventDetails() {
        std::cout << "Enter event name: ";
        std::cin >> eventName;
        std::cout << "Enter your first name: ";
        std::cin >> firstName;
        std::cout << "Enter your last name: ";
        std::cin >> lastName;
        std::cout << "Enter number of guests: ";
        std::cin >> numberOfGuests;
        std::cout << "Enter duration of event in minutes: ";
        std::cin >> numberOfMinutes;
    }

    void calculateServers() {
        numberOfServers = ceil(numberOfGuests / 20.0);
    }

    double calculateServerCost() {
        double cost1 = (numberOfMinutes / 60.0) * CostPerHour;
        double cost2 = (numberOfMinutes % 60) * CostPerMinute;
        return cost1 + cost2;
    }

    double calculateFoodCost() {
        return numberOfGuests * CostOfDinner;
    }

    double calculateAverageCost() {
        return calculateFoodCost() / numberOfGuests;
    }

    double calculateTotalCost() {
        return calculateFoodCost() + (calculateServerCost() * numberOfServers);
    }

    double calculateDepositAmount() {
        return calculateTotalCost() * 0.25;
    }

    void displayCostEstimation() {
        std::cout << "\nEvent Details:" << std::endl;
        std::cout << "Event Name: " << eventName << std::endl;
        std::cout << "Organizer: " << firstName << " " << lastName << std::endl;
        std::cout << "Number of Guests: " << numberOfGuests << std::endl;
        std::cout << "Duration of Event (minutes): " << numberOfMinutes << std::endl;
        std::cout << "Number of Servers Required: " << numberOfServers << std::endl;
        std::cout << "Total Food Cost:rs" << calculateFoodCost() << std::endl;
        std::cout << "Average Cost Per Person:rs" << calculateAverageCost() << std::endl;
        std::cout << "Total Cost:rs" << calculateTotalCost() << std::endl;
        std::cout << "Deposit Amount (25%):rs" << calculateDepositAmount() << std::endl;
    }
};

int main() {
    Event event;
    event.inputEventDetails();
    event.calculateServers();
    event.displayCostEstimation();

    return 0;
}
