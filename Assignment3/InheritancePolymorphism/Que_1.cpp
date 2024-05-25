//Assume a class cricketer is declared. Declare a derived class batsman from cricketer. Data member of 
//batsman. Total runs, Average runs and best performance. Member functions input data, calculate average 
//runs, Display data. (Single Inheritance) 

#include <iostream>

using namespace std;

class cricketer {
public:
    virtual void inputData() {
        
    }

    virtual void displayData() {
    
    }
};

class batsman : public cricketer {
public:
    int totalRuns;
    float averageRuns;
    string bestPerformance;  

    void inputData() override {
        cricketer::inputData();  

        cout << "Enter total runs: ";
        cin >> totalRuns;

        cout << "Enter best performance (e.g., highest score, fastest century): ";
        cin.ignore(); 
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
        cricketer::displayData();  

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
