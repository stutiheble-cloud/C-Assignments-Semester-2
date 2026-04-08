#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;
    void info() { cout << "This is a shape.\n"; }
};

class Circle : public Shape {
public:
    void draw() { cout << "Drawing Circle\n"; }
};

class Square : public Shape {
public:
    void draw() { cout << "Drawing Square\n"; }
};

int main() {
    Shape* s1 = new Circle();
    Shape* s2 = new Square();

    s1->info(); s1->draw();
    s2->info(); s2->draw();

    delete s1; delete s2;
}
