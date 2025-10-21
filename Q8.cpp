#include <iostream>
using namespace std;

class Calculator {
    public:
        int add(int a, int b) {
            return a + b;
        }

        int add(int a, int b, int c) {
            return a + b + c;
        }

        double add(double a, double b) {
            return a + b;
        }

        virtual void showType() {
            cout << "This is a basic Calculator" << endl;
        }
};


class AdvancedCalculator : public Calculator {
    public:
        void showType() override {
            cout << "This is an Advanced Calculator" << endl;
        }
};

int main() {
    Calculator c1;
    cout << "Overloading examples:" << endl;
    cout << "Add two ints: " << c1.add(5, 10) << endl;
    cout << "Add three ints: " << c1.add(2, 3, 4) << endl;
    cout << "Add two doubles: " << c1.add(2.5, 3.7) << endl;
    cout << endl;


    Calculator *ptr;  
    AdvancedCalculator ac;
    ptr = &ac;

    cout << "Overriding example:" << endl;
    ptr->showType(); 

    return 0;
}
