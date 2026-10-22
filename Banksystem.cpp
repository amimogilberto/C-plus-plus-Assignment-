//Gilberto Amimo Otieno
//Ct101/G/26584/25
//KyU
//group B

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string holderName;
    string accountNumber;
    double balance;

public:
    // ii) Constructor
    BankAccount(string name, string accNum, double bal) {
        holderName = name;
        accountNumber = accNum;
        balance = bal;
        cout << "Account successfully created" << endl;
    }

    // iii) Display function
    void displayAccount() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Holder: " << holderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Balance: " << balance << endl;
    }

    // iv) Destructor
    ~BankAccount() {
        cout << "\nAccount closed successfully" << endl;
    }
};

// v) Main function
int main() {
    BankAccount acc1("Gilberto", "12345678", 5000.0);
    acc1.displayAccount();
    return 0;
}
