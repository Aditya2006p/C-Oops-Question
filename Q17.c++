#include <iostream>
using namespace std;

class Base {
private:
    int privateData;
protected:
    int protectedData;
public:
    int publicData;
    Base() : privateData(10), protectedData(20), publicData(30) {}

    void displayBase() {
        cout << "Base Class - " << endl;
        cout << "Private Data (not accessible): " << privateData << endl;
        cout << "Protected Data: " << protectedData << endl;
        cout << "Public Data: " << publicData << endl;
    }
};

class DerivedPublic : public Base {
public:
    void displayDerivedPublic() {
        // cout << "Private Data: " << privateData << endl; // Not accessible
        cout << "Protected Data: " << protectedData << endl;
        cout << "Public Data: " << publicData << endl;
    }
};

class DerivedProtected : protected Base {
public:
    void displayDerivedProtected() {
        // cout << "Private Data: " << privateData << endl; // Not accessible
        cout << "Protected Data: " << protectedData << endl;
        cout << "Public Data: " << publicData << endl;
    }
};

class DerivedPrivate : private Base {
public:
    void displayDerivedPrivate() {
        // cout << "Private Data: " << privateData << endl; // Not accessible
        cout << "Protected Data: " << protectedData << endl;
        cout << "Public Data: " << publicData << endl;
    }
};

int main() {
    Base baseObj;
    DerivedPublic publicObj;
    DerivedProtected protectedObj;
    DerivedPrivate privateObj;

    cout << "Base Class Access:\n";
    baseObj.displayBase();

    cout << "\nDerivedPublic Access:\n";
    publicObj.displayDerivedPublic();

    cout << "\nDerivedProtected Access:\n";
    protectedObj.displayDerivedProtected();

    cout << "\nDerivedPrivate Access:\n";
    privateObj.displayDerivedPrivate();

    return 0;
}