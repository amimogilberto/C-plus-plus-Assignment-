#include <iostream>


using namespace std;

// functcion definition

float calculateTax (float grossSalary){
    if (grossSalary <30000){
        return grossSalary * 0.05;
    }
    else if (grossSalary <=59999){
        return (30000 * 0.05)+ ((grossSalary - 30000) * 0.10);
    }
    else {
        return (30000 * 0.05 ) + (29999 * 0.10) +((grossSalary -59999) * 0.15);
    }
}

int main (){
    float grossSalary , tax , netSalary;

    cout << "Enter gross salary (Ksh): ";
    cin>> grossSalary;

    tax = calculateTax (grossSalary);
    netSalary = grossSalary - tax;

    cout<< " \nGross Salary: (Ksh)" << grossSalary << endl;
    cout<< " \nTax Amount: (Ksh)" << tax << endl;
    cout<< " \nNet Salary: (Ksh)" << netSalary << endl;


    return 0;



}