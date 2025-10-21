#include <iostream>
#include <string>
using namespace std;

class shape {
    protected:
        int height;
        int breadth;
    public:
        void values(int h, int b){
            height = h;
            breadth = b;
        }


};

class Rectangle : public shape {
    public:
        double area(){
            int a = height * breadth;
            cout<<"The area is: "<< a <<endl;
        }

        double perimeter(){
            int p = 2 * (height + breadth);
            cout<<"The perimeter is: "<< p <<endl;
        }
};

int main(){
    Rectangle r1;
    r1.values(2, 4);
    r1.area();
    r1.perimeter();
}