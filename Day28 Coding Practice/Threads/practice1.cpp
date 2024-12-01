// Example 1 


#include <iostream>
#include <thread>

using namespace std;

void printHello() {
    cout << "Hello from the thread!" << endl;
}

int main() {
    // Create a thread that will run the printHello function
    thread t(printHello);

    // Wait for the thread to finish before continuing
    t.join();

    cout << "Main thread is done!" << endl;
    return 0;
}
