//gilberto amimo otieno
//kirinyaga university
//ct101/g/26584/25
//computer science 
//group b


#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing Shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() {
        cout << "Drawing Rectangle" << endl;
    }
};

class Triangle : public Shape {
public:
    void draw() {
        cout << "Drawing Triangle" << endl;
    }
};

int main() {
    Shape* s; // base class pointer

    Circle c;
    Rectangle r;
    Triangle t;

    s = &c;
    s->draw();

    s = &r;
    s->draw();

    s = &t;
    s->draw();

    return 0;
}