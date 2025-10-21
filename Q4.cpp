#include <iostream>
#include <string>
using namespace std;

class Person {
    protected:
        string name;
        int age;
    public:
        void setInfo(string n, int a){
            this->name = n;
            this->age = a;
        }
};

class Employee : public Person {
    protected:
        int ID;
    public:
        void setValue(int id){
            ID = id;
        }

};

class Manager : public Employee {
    private:
        string Dep;
        string Post;
    public:
        void set(string dep, string p){
            Dep = dep;
            Post = p;
        }

        void info(){
            cout<<"Name: " << name <<endl;
            cout<<"Age: " << age <<endl;
            cout<<"Employee ID: " << ID <<endl;
            cout<<"Department: " << Dep <<endl;
            if (Post == "Yes"){
                cout<<"Position: " << "Manager" <<endl;
            }
            else {
                cout<<"Position: " << "Employee" <<endl;
            }
        }
};

int main(){
    Manager m;
    m.setInfo("Dins", 20);
    m.setValue(13);
    m.set("Animation And Creative", "Yes");
    m.info();
}