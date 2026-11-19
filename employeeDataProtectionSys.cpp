//Gilberto Amimo Otieno
//Ct101/G/26584/25
//KyU
//group B

#include <iostream>
#include <string>
using namespace std;

// i) Class with PRIVATE data members
class Employee {
private:
    string employeeName;
    int employeeID;
    double basicSalary;
    double netSalary; // to store calculated salary

public:
    // ii) Set / input details
    void setEmployeeDetails() {
        cout << "Enter Employee Name: ";
        getline(cin, employeeName);
        cout << "Enter Employee ID: ";
        cin >> employeeID;
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    // Calculate net salary with 10% allowance
    double calculateSalary() {
        netSalary = basicSalary + 0.10 * basicSalary;
        return netSalary;
    }

    // Display all details
    void displayEmployeeDetails() {
        // Make sure net salary is calculated
        calculateSalary();

        cout << "\n--- Employee Details ---" << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Net Salary (with 10% allowance): " << netSalary << endl;
    }
};

// iii) Main function
int main() {
    Employee emp1; // Create object

    emp1.setEmployeeDetails(); // Set details
    emp1.displayEmployeeDetails(); // Display details

    return 0;
}
