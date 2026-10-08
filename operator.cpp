// GILBEERTO AMIIMO OTIENO
// CT101/G/26584/25
// BACHELOR OF COMPUTER SCIENCE
// KIRINYAGA UNIVERSITY

#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char op;
    
    cout<<"============================"<<endl;
    cout<<"===Amimo basic calculator===\n\n"<<endl;

    // i. Declare and prompt
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    // ii. switch statement
    switch(op) {
        case '+':
            result = num1 + num2;
            cout << "Result = " << num1 << " + " << num2 << " = " << result << endl;
            break;

        case '-':
            result = num1 - num2;
            cout << "Result = " << num1 << " - " << num2 << " = " << result << endl;
            break;

        case '*':
            result = num1 * num2;
            cout << "Result = " << num1 << " * " << num2 << " = " << result << endl;
            break;

        case '/':
            // handle division by zero
            if (num2 == 0) {
                cout << "Error! Division by zero is not allowed." << endl;
            } else {
                result = num1 / num2;
                cout << "Result = " << num1 << " / " << num2 << " = " << result << endl;
            }
            break;

        default:
            cout << "Invalid operator! Use +, -, * or / only." << endl;
    }

    return 0;
}