#include <iostream>
#include <vector>
#include<string>
using namespace std;

class List {
    private:
        vector<int> data = {}; 
    public:
        List(initializer_list<int> values): data(values){}

        void append(int values){
            data.push_back(values);
        }

        void pop(int values){
            return data.pop_back();
        }

        void replace(int values, int num){
            for (int i = 0; i < data.size(); i++){
                if (data[i] == num) {
                    data[i] = values;
                }
            }
        }

        void view(){
            cout<<"["<<endl;
            for (int i = 0; i < data.size(); i++){
                cout<< data[i] <<" ,";
            }
            cout<<"]"<<endl; 
        }   


};

int main(){
    List l1 = {10, 20, 30};
    l1.append(40);
    l1.pop(30);
    l1.replace(10, 30);
    l1.view();


    return 0;

}