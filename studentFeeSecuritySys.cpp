//gilberto amimo otieno
//ct101/g/26584/25
//group ba
//oop1
//cs

#include <iostream>
#include <string>
using namespace std;

// i) Class with PRIVATE data members
class Student {
private:
    string studentName;
    string admissionNumber;
    double feeBalance; // Cannot be accessed directly from outside

public:
    // ii) Input student details
    void inputStudentData() {
        cout << "Enter Student Name: ";
        getline(cin, studentName);
        cout << "Enter Admission Number: ";
        getline(cin, admissionNumber);
        cout << "Enter Fee Balance: ";
        cin >> feeBalance;
    }

    // Reduce fee balance when payment is made
    void makePayment() {
        double payment;
        cout << "Enter Payment Amount: ";
        cin >> payment;

        if (payment <= feeBalance) {
            feeBalance = feeBalance - payment;
            cout << "Payment of " << payment << " received successfully." << endl;
        } else {
            cout << "Payment exceeds balance! Payment not accepted." << endl;
        }
    }

    // Show student details and remaining balance
    void displayStatus() {
        cout << "\n--- Student Fee Status ---" << endl;
        cout << "Student Name: " << studentName << endl;
        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Remaining Fee Balance: " << feeBalance << endl;
    }
};

// iv) Main function
int main() {
    Student student1; // Create object

    student1.inputStudentData(); // Input details
    student1.makePayment(); // Process fee payment
    student1.displayStatus(); // Display updated status

    return 0;
}
