#include <iostream> 
using namespace std;

/*
Inheritance : deriving attributes of some class
Types:
- Single
- Multilevel
- Multiple
- Hierarchical
- Hybrid
*/

class Bank {
public:
    double balance;

    // Constructor to initialize balance
    Bank() {
        balance = 1000;
    }

    void show_balance() {
        cout << "Current balance: " << balance << endl;
    }
};

class Interest : public Bank {
public:
    void addInterest() {
        balance += 100;
        cout << "Interest added successfully!" << endl;
    }
};

int main() {
    Interest i1;

    i1.show_balance();   // Before interest
    i1.addInterest();    // Add interest
    i1.show_balance();   // After interest

    return 0;
}