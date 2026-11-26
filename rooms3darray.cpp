//gilberto amimo otieno
//kirinyaga university
//ct101/g/26584/25
//computer science 
//group b


#include <iostream>
using namespace std;
int main() {
    int chain[3][5][10];
    int total = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 10; k++) {
                cout << "Branch " << i + 1 << " Floor " << j + 1 << " Room " << k + 1 << " (1=Occupied 0=Vacant): ";
                cin >> chain[i][j][k];
                if (chain[i][j][k] == 1)
                    total++;
            }
        }
    }

    cout << "Total occupied rooms: " << total << endl;
    return 0;
}