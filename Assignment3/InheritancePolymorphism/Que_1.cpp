//Assume a class cricketer is declared. Declare a derived class batsman from cricketer. Data member of 
//batsman. Total runs, Average runs and best performance. Member functions input data, calculate average 
//runs, Display data. (Single Inheritance) 

#include <iostream>

using namespace std;

class cricketer {
public:
    virtual void inputData() {
        // Input data specific to a cricketer (e.g., name, matches played)
    }

    virtual void displayData() {
        // Display data specific to a cricketer
    }
};

class batsman : public cricketer {
public:
    int totalRuns;
    float averageRuns;
    string bestPerformance;  // Consider using a more descriptive data type for performance

    void inputData() override {
        cricketer::inputData();  // Call base class input function (if applicable)

        cout << "Enter total runs: ";
        cin >> totalRuns;

        cout << "Enter best performance (e.g., highest score, fastest century): ";
        cin.ignore(); // Clear input buffer after reading cricketer data (if applicable)
        getline(cin, bestPerformance);
    }

    void calculateAverageRuns(int matchesPlayed) {
        if (matchesPlayed > 0) {
            averageRuns = static_cast<float>(totalRuns) / matchesPlayed;
        } else {
            cout << "Error: Cannot calculate average with zero matches played." << endl;
        }
    }

    void displayData() override {
        cricketer::displayData();  // Call base class display function (if applicable)

        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main() {
    batsman b1;

    b1.inputData();
    int matchesPlayed;
    cout << "Enter number of matches played: ";
    cin >> matchesPlayed;

    b1.calculateAverageRuns(matchesPlayed);
    b1.displayData();

    return 0;
}
