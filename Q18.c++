#include <iostream>
using namespace std;

class A {
public:
    void func(int& val) {
        val *= 2;
    }
};

class B {
public:
    void func(int& val) {
        val *= 3;
    }
};

class C {
public:
    void func(int& val) {
        val *= 5;
    }
};

class D {
private:
    int val;
    A a;
    B b;
    C c;

public:
    D() : val(1) {} // Initialize val to 1

    void update_val(int new_val) {
        while (new_val % 2 == 0) {
            a.func(val);
            new_val /= 2;
        }
        while (new_val % 3 == 0) {
            b.func(val);
            new_val /= 3;
        }
        while (new_val % 5 == 0) {
            c.func(val);
            new_val /= 5;
        }
    }

    int get_val() const {
        return val;
    }
};

int main() {
    D d;
    cout << "Initial value of D: " << d.get_val() << endl;
    int new_val;
    cout << "Enter the new value (composed of prime factors 2, 3, 5): ";
    cin >> new_val;
    d.update_val(new_val);
    cout << "Updated value of D: " << d.get_val() << endl;
    return 0;
}