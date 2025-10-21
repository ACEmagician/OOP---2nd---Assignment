#include <iostream>
#include <string>
using namespace std;

class First {
    private:
        string name;
        string ability;
    public:
        void setinfo(string n, string a){
            name = n;
            ability = a;
        }
    friend void info(First, Second);
};

class Second {
    private:
        string move;
    public:
        void setMove(string m){
            move = m;
        }
    friend void info(First, Second);
};

void info(First n, Second m) {
    cout << "Name : " << n.name <<endl;
    cout << "Move 1 : "  << m.move <<endl;
}

int main(){
    First f;
    f.setinfo("Gojo", "Limitless");
    Second s;
    s.setMove("Purple");
}