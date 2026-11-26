//gilberto amimo otieno
//ct101/g/26584/25
//group b
//computer science kyu
//oop1

#include <iostream>
using namespace std;

int main() {
    // 1. 1D array to store revenue for 7 days
    double revenue[7];
    double total = 0;
    double average = 0;

    string days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday",
                      "Friday", "Saturday", "Sunday"};

    cout << "=== Hotel Weekly Revenue Tracker ===" << endl;

    // 2. Input revenue for each day
    for (int i = 0; i < 7; i++) {
        cout << "Enter revenue for " << days[i] << ": ";
        cin >> revenue[i];
        total += revenue[i]; // Add to total as we input
    }

    // 3. Calculate average
    average = total / 7;

    // Display results
    cout << "\n--- Weekly Report ---" << endl;
    for (int i = 0; i < 7; i++) {
        cout << days[i] << ": " << revenue[i] << endl;
    }

    cout << "\nTotal Weekly Revenue: " << total << endl;
    cout << "Average Daily Revenue: " << average << endl;

    return 0;
}
