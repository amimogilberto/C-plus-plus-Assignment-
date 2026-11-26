//gilberto amimo otieno
//kirinyaga university
//ct101/g/26584/25
//computer science 
//group b


#include <iostream>
using namespace std;
int main() {
    int occupancy[5][10];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            cout << "Floor " << i + 1 << " Room " << j + 1 << " (1=Occupied 0=Vacant): ";
            cin >> occupancy[i][j];
        }
    }

    for (int i = 0; i < 5; i++) {
        int occupied = 0;
        int vacant = 0;
        for (int j = 0; j < 10; j++) {
            if (occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }
        cout << "Floor " << i + 1 << " - Occupied: " << occupied << " Vacant: " << vacant << endl;
    }
    return 0;
}