// Example 4 -> 

#include <iostream>
#include <thread>

using namespace std;

void printMessage(const string& message) {
    cout << message << endl;
}

int main() {
    // Create a thread and pass a string to the function
    thread t(printMessage, "Hello from the thread with an argument!");

    // Wait for the thread to finish
    t.join();

    cout << "Main thread is done!" << endl;
    return 0;
}

// Same using lambda function 

#include <iostream>
#include <thread>

using namespace std;

int main() {
    // Create a thread that runs a lambda expression
    thread t([]() {
        cout << "Hello from the lambda thread!" << endl;
    });

    // Wait for the thread to finish
    t.join();

    cout << "Main thread is done!" << endl;
    return 0;
}