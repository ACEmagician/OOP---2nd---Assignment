#include <iostream>
#include <vector>
#include <string>
using namespace std;

class MyDictionary {
private:
    vector<string> keys;
    vector<string> values;

public:
    void add(string key, string value) {
        for (int i = 0; i < keys.size(); i++) {
            if (keys[i] == key) {
                values[i] = value; 
                cout << "Updated key: " << key << " with new value: " << value << endl;
                return;
            }
        }
        keys.push_back(key);
        values.push_back(value);
        cout << "Added key: " << key << " → " << value << endl;
    }

    string get(string key){
        for (int i = 0; i < keys.size(); i++) {
            if (keys[i] == key) {
                return values[i];
            }
        }
        return "Key not found!";
    }


    void remove(string key){
        for (int i = 0; i < keys.size(); i++) {
            if (keys[i] == key) {
                keys.erase(keys.begin() + i);
                values.erase(values.begin() + i);
                cout << "Removed key: " << key << endl;
                return;
            }
        }
        cout << "Key not found!" << endl;
    }


    void display(){
        cout << "\n Dictionary Contents \n";
        for (int i = 0; i < keys.size(); i++){
            cout << keys[i] << " : " << values[i] << endl;
        }
        cout << "\n";
    }

    int size(){
        return keys.size();
    }
};


int main() {
    MyDictionary dict;

    dict.add("name", "Dhiyanesh");
    dict.add("language", "C++");
    dict.add("version", "17");
    dict.display();

    cout << "Search result for 'language': " << dict.get("language") << endl;

    dict.add("language", "C++20"); 
    dict.display();

    dict.remove("version");
    dict.display();

    cout << "Total entries: " << dict.size() << endl;

    return 0;
}
