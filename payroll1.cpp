// Gilberto Amimo Otieno 
// CT101/G/26584/25
// Bachelor of Computer science 
// Group B

#include <iostream>
#include <string>
using namespace std;

// Global variables so all functions can see them
string employeeName;
float basicSalary, overtimeHours, ratePerHour, overtimePay, netSalary;

void getEmployeeDetails(){
    cout<<"Enter Employee name: "<<endl;
    getline(cin, employeeName);
    
    cout<<"Enter Employee basic salary (Ksh): "<<endl;
    cin>>basicSalary;
    
    cout<<"Enter Employee overtime hours: "<<endl;
    cin>>overtimeHours;
    
    cout<<"Enter Rate per hour payment (Ksh): "<<endl;
    cin>>ratePerHour;
}
 
void calculateOvertimePay(){
    overtimePay = overtimeHours * ratePerHour;
    cout<<"The overtime payment (Ksh): "<<overtimePay<<endl;
}
 
void calculateNetSalary(){
    netSalary = basicSalary + overtimePay;
    cout<<"The netsalary (Ksh): "<<netSalary<<endl;
}
 
void displayPayslip(){
    cout<<"\n======== PAYSLIP ========"<<endl;
    cout<<"Employee Name: "<<employeeName<<endl;
    cout<<"Basic salary (Ksh): "<<basicSalary<<endl;
    cout<<"Overtime hours: "<<overtimeHours<<endl;
    cout<<"Rate per hour pay (Ksh): "<<ratePerHour<<endl;
    cout<<"Overtime Pay (Ksh): "<<overtimePay<<endl;
    cout<<"Net Salary (Ksh): "<<netSalary<<endl;
    cout<<"========================="<<endl;
}

int main(){
    getEmployeeDetails();
    calculateOvertimePay();
    calculateNetSalary();
    displayPayslip();
    
    return 0;
}