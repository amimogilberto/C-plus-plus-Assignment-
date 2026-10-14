// gilberto amimo 
// kirinyaga university
// ct101/26584/25
// bachelor of computer science
// group b

#include <iostream>
#include <string>
#include <iomanip> // for formatting
using namespace std;

int main() {
    string employeeName;
    float basicSalary, bonus, totalSalary;

    for (int i = 1; i <= 5; ++i) {
        cout << "\n--- Employee " << i << " ---" << endl;
        
        cout << "ENTER EMPLOYEE NAME: ";
        getline(cin, employeeName);

        cout << "ENTER BASIC SALARY: ";
        cin >> basicSalary;
        
        // Clear the leftover ENTER so next getline works
        cin.ignore(1000, '\n');

        // iii. Calculate bonus
        bonus = 0.05 * basicSalary;

        // iv. Calculate total salary
        totalSalary = basicSalary + bonus;

        // v. Display report
        cout << "\n----- PAY REPORT -----" << endl;
        cout << "Name         : " << employeeName << endl;
        cout << fixed << setprecision(2);
        cout << "Basic Salary : " << basicSalary << endl;
        cout << "Bonus (5%)   : " << bonus << endl;
        cout << "Total Salary : " << totalSalary << endl;
    }

    return 0;
}