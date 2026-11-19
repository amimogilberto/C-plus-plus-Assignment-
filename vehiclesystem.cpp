//Gilberto Amimo Otieno
//Ct101/G/26584/25
//KyU
//group B

#include <iostream>
#include <string>
using namespace std;

// i) Base class
class Vehicle {
protected:
    string Brand;
    int YearOfManufacture;

public:
    // Constructor
    Vehicle(string brand, int year) {
        Brand = brand;
        YearOfManufacture = year;
    }

    // ii) Display base details
    void displayVehicle() {
        cout << "Brand: " << Brand << endl;
        cout << "Year of Manufacture: " << YearOfManufacture << endl;
    }
};

// iii) Derived class
class Car : public Vehicle {
private:
    int NumberOfDoors;
    double EngineCapacity;

public:
    // Constructor - calls base class constructor
    Car(string brand, int year, int doors, double capacity)
        : Vehicle(brand, year) {
        NumberOfDoors = doors;
        EngineCapacity = capacity;
    }

    // iv) Display car + inherited details
    void displayCar() {
        displayVehicle(); // inherited details
        cout << "Number of Doors: " << NumberOfDoors << endl;
        cout << "Engine Capacity: " << EngineCapacity << " cc" << endl;
    }
};

// v) Main function
int main() {
    string brand;
    int year, doors;
    double capacity;

    cout << "Enter Brand: ";
    getline(cin, brand);
    cout << "Enter Year of Manufacture: ";
    cin >> year;
    cout << "Enter Number of Doors: ";
    cin >> doors;
    cout << "Enter Engine Capacity (cc): ";
    cin >> capacity;

    Car car1(brand, year, doors, capacity);

    cout << "\n--- Car Details ---" << endl;
    car1.displayCar();

    return 0;
}
