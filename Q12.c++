#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Default constructor
    Time() : hours(0), minutes(0), seconds(0) {}

    // Parameterized constructor
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    // Display time in HH:MM:SS format
    void displayTime() const {
        cout << (hours < 10 ? "0" : "") << hours << ":"
             << (minutes < 10 ? "0" : "") << minutes << ":"
             << (seconds < 10 ? "0" : "") << seconds << endl;
    }

    // Add two Time objects
    void add(const Time& t1, const Time& t2) {
        seconds = t1.seconds + t2.seconds;
        minutes = t1.minutes + t2.minutes;
        hours = t1.hours + t2.hours;

        if (seconds >= 60) {
            seconds -= 60;
            minutes++;
        }

        if (minutes >= 60) {
            minutes -= 60;
            hours++;
        }
    }
};

int main() {
    // Create Time objects
    Time t1(1, 45, 50);
    Time t2(2, 30, 20);
    Time t3;

    // Add times
    t3.add(t1, t2);

    // Display times
    cout << "Time 1: ";
    t1.displayTime();

    cout << "Time 2: ";
    t2.displayTime();

    cout << "Total Time: ";
    t3.displayTime();

    return 0;
}