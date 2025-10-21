#include <iostream>
#include <string>
using namespace std;

class People {
    protected:
        string name;
        int age;
    public:
        void setinfo(string n, int a){
            name = n;
            age = a;
        }
};

class Athelete {
    protected:
        string sport;
    public:
        void setSport(string s){
            sport = s;
        }
};

class Sportsperson : public People, public Athelete {
    public:
        void info(){
            cout<<"Name: "<< name <<endl;
            cout<<"Age: "<< age <<endl;
            cout<<"Sport: "<< sport <<endl;
        }

};

int main(){
    Sportsperson s1;
    s1.setinfo("Dhiyanesh", 19);
    s1.setSport("Basketball");
    s1.info();
}