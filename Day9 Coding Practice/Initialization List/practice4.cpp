//Code Efficiency 
//////Without Initilization list /////

#include <iostream>
#include <vector>
using namespace std ; 

class DataContainer {
private:
    vector<int> data;

public:
    DataContainer(size_t size) {
        data.resize(size);
        for (size_t i = 0; i < size; ++i) {
            data[i] = 0;
        }
    }

    void addValue(int value) {
        data.push_back(value);
    }

    void display() {
        cout << "Data: ";
        for (int value : data) {
            cout << value << " ";
        }
        cout <<endl;
    }
};

int main() {
    DataContainer container(5); 
    container.display();

    container.addValue(10);
    container.addValue(20);
    container.addValue(30);

    container.display();
    return 0;
}




///////// With Initialization List ////

#include <iostream>
#include <vector>
using namespace std ; 

class DataContainer {
private:
    vector<int> data;

public:
    DataContainer(size_t size) : data(size) { 
    }

    void addValue(int value) {
        data.push_back(value);
    }

    void display(){
        cout << "Data: ";
        for (int value : data) {
            cout << value << " ";
        }
        cout << endl;
    }
};

int main() {
    DataContainer container(5);  // Create a DataContainer with initial size of 5
    // Same as before // 
}


