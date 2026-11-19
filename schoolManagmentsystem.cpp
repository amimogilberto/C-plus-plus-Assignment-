//OTIENO GILBERTO AMIMO
//CT101/G/26584/25
//GROUP B
//OOP1 

#include <iostream>
#include <string>
using namespace std;

// i) Base class
class Person {
protected:
    string Name;
    int Age;

public:
    // Constructor to input base details
    Person(string name, int age) {
        Name = name;
        Age = age;
    }

    // ii) Display base details
    void displayPerson() {
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
    }
};

// iii) Derived class
class Student : public Person {
private:
    string admissionNumber;
    string Class;

public:
    // Constructor - calls base class constructor
    Student(string name, int age, string admNo, string cls)
        : Person(name, age) {
        admissionNumber = admNo;
        Class = cls;
    }

    // iv) Display student + inherited details
    void displayStudent() {
        displayPerson(); // inherited details
        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Class: " << Class << endl;
    }
};

// v) Main function
int main() {
    string name, admNo, cls;
    int age;

    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Age: ";
    cin >> age;
    cin.ignore(); // clear buffer
    cout << "Enter Admission Number: ";
    getline(cin, admNo);
    cout << "Enter Class: ";
    getline(cin, cls);

    Student student1(name, age, admNo, cls);

    cout << "\n--- Student Details ---" << endl;
    student1.displayStudent();

    return 0;
}
