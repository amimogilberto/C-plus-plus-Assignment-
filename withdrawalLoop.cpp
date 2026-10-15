// gilberto amimo 
// kirinyaga university
// ct101/26584/25
// bachelor of computer science
// group b

#include <iostream>
using namespace std;

int main() {
    // i. Declare variables
    double balance, withdraw;

    cout << "=== Savings Withdrawal System ===" << endl;
    cout << "Enter your account balance: KES ";
    cin >> balance;

    // ii. Use while loop to allow repeated withdrawals
    while (balance > 0) {
        cout << "\nYour current balance is: KES " << balance << endl;
        cout << "Enter withdrawal amount (0 to stop): KES ";
        cin >> withdraw;

        // Allow user to stop manually
        if (withdraw == 0) {
            cout << "Transaction stopped by user." << endl;
            break;
        }

        // iv. Stop condition: withdrawal > balance
        if (withdraw > balance) {
            cout << "Insufficient balance! You cannot withdraw KES " << withdraw << endl;
            cout << "Your balance is only KES " << balance << endl;
            break; // stop the loop
        }

        // iii. Deduct and display remaining balance
        balance = balance - withdraw; // or balance -= withdraw;
        cout << "Withdrawal successful! You withdrew KES " << withdraw << endl;
        cout << "Remaining balance: KES " << balance << endl;

        // iv. Stop condition: balance becomes zero
        if (balance == 0) {
            cout << "\nYour balance is now zero. No more withdrawals." << endl;
            break;
        }
    }

    cout << "\n=== Thank you for using our service ===" << endl;
    return 0;
}