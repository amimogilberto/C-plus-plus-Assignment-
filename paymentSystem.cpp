//gilberto amimo otieno
//kirinyaga university
//ct101/g/26584/25
//computer science 
//group b

#include <iostream>
using namespace std;

class Payment {
public:
    // 1. Cash payment
    void processPayment(int amount) {
        cout << "Cash Payment: " << amount << endl;
    }

    // 2. Card payment - amount + transaction fee
    void processPayment(int amount, int fee) {
        int total = amount + fee;
        cout << "Card Payment: " << amount << " + Fee " << fee << " = " << total << endl;
    }

    // 3. Mobile money - amount + fee - discount
    void processPayment(int amount, int fee, int discount) {
        int total = amount + fee - discount;
        cout << "Mobile Money Payment: " << amount << " + Fee " << fee << " - Discount " << discount << " = " << total << endl;
    }
};

int main() {
    Payment p;

    p.processPayment(5000);
    p.processPayment(5000, 200);
    p.processPayment(5000, 200, 100);

    return 0;
}