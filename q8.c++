#include <iostream>
using namespace std;

class Student {
private:
    int scores[5];  // Array to store the scores of 5 subjects
public:
    // Function to input the scores
    void input() {
        for (int i = 0; i < 5; ++i)
            cin >> scores[i];
    }

    // Function to calculate the total score of the student
    int calculateTotalScore() {
        int totalScore = 0;
        for (int i = 0; i < 5; ++i)
            totalScore += scores[i];
        return totalScore;
    }
};

int main() {
    int n;
    cout << "\nEnter number of students: ";
    cin >> n;

    // Create an array of Student objects
    Student students[n];

    cout << "\nEnter Marks in 5 Subjects for each student:\n" << endl;

    // Input scores for each student
    for (int i = 0; i < n; ++i) {
        cout << "Student " << i + 1 << ": ";
        students[i].input();
    }

    // Calculate Anna's total score (Anna is the first student)
    int annaTotalScore = students[0].calculateTotalScore();

    // Count how many students have a higher score than Anna
    int countHigher = 0;
    for (int i = 1; i < n; ++i) {
        if (students[i].calculateTotalScore() > annaTotalScore) {
            countHigher++;
        }
    }

    // Output the result
    cout << "\nNumber of students having better grades than Anna: " << countHigher << endl;

    return 0;
}