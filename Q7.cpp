#include <iostream>
#include <vector>
using namespace std;

class Sorter {
    private:
        vector<int> data = {};

    public:

        Sorter(initializer_list<int> values) : data(values) {}

        void add(int value) {
            data.push_back(value);
        }

        void view() {
            cout << "[ ";
            for (int i = 0; i < data.size(); i++) {
                cout << data[i] << " ";
            }
            cout << "]" << endl;
        }

        void bubbleSort() {
            for (int i = 0; i < data.size() - 1; i++) {
                for (int j = 0; j < data.size() - i - 1; j++) {
                    if (data[j] > data[j + 1]) {
                        int temp = data[j];
                        data[j] = data[j + 1];
                        data[j + 1] = temp;
                    }
                }
            }
            cout << "Sorted using Bubble Sort " << endl;
        }

        void insertionSort() {
            for (int i = 1; i < data.size(); i++) {
                int key = data[i];
                int j = i - 1;

                while (j >= 0 && data[j] > key) {
                    data[j + 1] = data[j];
                    j--;
                }
                data[j + 1] = key;
            }
            cout << "Sorted using Insertion Sort " << endl;
        }

        void selectionSort() {
            for (int i = 0; i < data.size() - 1; i++) {
                int minIndex = i;
                for (int j = i + 1; j < data.size(); j++) {
                    if (data[j] < data[minIndex]) {
                        minIndex = j;
                    }
                }
                int temp = data[i];
                data[i] = data[minIndex];
                data[minIndex] = temp;
            }
            cout << "Sorted using Selection Sort " << endl;
        }
};

int main() {
    Sorter s1 = {50, 10, 40, 20, 30};
    cout << "Original Data: ";
    s1.view();

    s1.bubbleSort();
    s1.view();

    Sorter s2 = {70, 10, 90, 40, 20};
    s2.insertionSort();
    s2.view();

    Sorter s3 = {9, 1, 7, 5, 3};
    s3.selectionSort();
    s3.view();

    return 0;
}
