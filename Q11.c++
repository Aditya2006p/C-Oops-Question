#include <iostream>
using namespace std;

class tollbooth {
private:
    unsigned int totalcars;  // Total number of cars
    double totalcash;        // Total cash collected

public:
    // Constructor to initialize data members
    tollbooth() : totalcars(0), totalcash(0.0) {}

    // Method to record a paying car
    void payingcar() {
        totalcars++;
        totalcash += 0.5; // Increment cash by 0.5 for a paying car
    }

    // Method to record a non-paying car
    void nonpaycar() {
        totalcars++;
    }

    // Method to display total cars and total cash collected
    void display() const {
        cout << "Total number of cars: " << totalcars << endl;
        cout << "Total cash collected: Rs. " << totalcash << endl;
    }
};

int main() {
    tollbooth tollbooth; // Create an object of class tollbooth
    char choice;

    cout << "Press 'p' for paying car" << endl;
    cout << "Press 'n' for non-paying car" << endl;
    cout << "Press 'e' to exit and display total" << endl;

    // Infinite loop to handle user input
    while (true) {
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 'p') {
            tollbooth.payingcar();
            cout << "Paying car recorded" << endl;
        } else if (choice == 'n') {
            tollbooth.nonpaycar();
            cout << "Non-paying car recorded" << endl;
        } else if (choice == 'e') {
            cout << "Exiting..." << endl;
            tollbooth.display(); // Display totals
            break;
        } else {
            cout << "Invalid input. Please try again." << endl;
        }
    }

    return 0;
}