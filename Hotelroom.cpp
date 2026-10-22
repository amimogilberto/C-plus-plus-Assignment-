//Gilberto Amimo Otieno
//Ct101/G/26584/25
//KyU
//Group B

#include <iostream>
#include <string>
using namespace std;

class RoomBooking {
private:
    string guestName;
    int roomNumber;
    int daysBooked;

public:
    // ii) Constructor
    RoomBooking(string name, int roomNo, int days) {
        guestName = name;
        roomNumber = roomNo;
        daysBooked = days;
        cout << "Room booking confirmed" << endl;
    }

    // iii) Display function
    void displayBooking() {
        cout << "\n--- Booking Details ---" << endl;
        cout << "Guest Name: " << guestName << endl;
        cout << "Room Number: " << roomNumber << endl;
        cout << "Number of Days: " << daysBooked << endl;
    }

    // iv) Destructor
    ~RoomBooking() {
        cout << "\nBooking ended, room released" << endl;
    }
};

// v) Main function
int main() {
    RoomBooking booking1("Gilberto", 101, 3);
    booking1.displayBooking();
    return 0;
}
