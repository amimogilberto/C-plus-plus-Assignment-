// gilberto amimo 
// kirinyaga university
// ct101/26584/25
// bachelor of computer science
// group b


#include <iostream>
#include <string>
using namespace std;

int main() {
    // i. Predefined credentials
    string correctUsername = "admin";
    string correctPassword = "pass123";

    string username, password;

    cout << "=== Online System Login ===" << endl;

    do {
        cout << "\nEnter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;

        if (username == correctUsername && password == correctPassword) {
            cout << "\nAccess Granted" << endl;
        } else {
            cout << "Incorrect credentials, try again" << endl;
        }

    } while (username != correctUsername || password != correctPassword);
    
    // iv. Loop stops only when correct

    return 0;
}