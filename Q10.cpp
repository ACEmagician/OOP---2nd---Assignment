#include <iostream>
#include <cmath>
using namespace std;

class Shape {
    public:
        virtual float area() = 0;  

        void info() {
            cout << "This is a shape." << endl;
        }
};


class Circle : public Shape {
    private:
        float radius;

    public:
        Circle(float r) {
            radius = r;
        }


        float area() override {
            return 3.14 * radius * radius;
        }
};


class Square : public Shape {
    private:
        float side;

    public:
        Square(float s) {
            side = s;
        }

        float area() override {
            return side * side;
        }
};

int main() {

    Circle c1(5);
    Square s1(4);

    cout << "Area of Circle: " << c1.area() << endl;
    cout << "Area of Square: " << s1.area() << endl;

    Shape *ptr;

    ptr = &c1;
    cout << "Circle area using base pointer: " << ptr->area() << endl;

    ptr = &s1;
    cout << "Square area using base pointer: " << ptr->area() << endl;

    return 0;
}
