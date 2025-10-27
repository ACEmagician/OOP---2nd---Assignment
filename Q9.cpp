#include<iostream>
#include<string>
using namespace std;

class Bank {
    private:
        string name; 
        double ball;
    public:
        void setValue(string name, double ball){ this->name=name; this->ball=ball; }
        string getName(){
            return name;
        }
        double getBal(){
            return ball;
        }
    
        void deposit(float f1){
            this->ball = this->ball + f1;
        }
        void withdraw(float f1){
            if (this->ball < f1 || this->ball < 0){
                cout << "The balance is too low" <<endl;
            }
            else {
                this->ball = this->ball - f1;
                cout << f1 << " was withdrawn" << endl;
                cout << ball << " is the available balance" << endl;
            }
        }
};


int main(){
    Bank a1, a2;
    
    a1.setValue("Dhiyanesh", 20000.0);
    a2.setValue("Brad Pitt", 30000.09);


}
