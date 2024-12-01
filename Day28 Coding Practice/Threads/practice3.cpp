// Example 3 -> We used join() to ensure the main thread waits for the worker threads to finish. However, sometimes we don't need to wait for the thread to finish. In such cases, you can use the detach() method.


#include <iostream>
#include <thread>

using namespace std;

void task1() {
    for (int i = 1; i <= 5; ++i) {
        cout << "Task 1, step " << i << endl;
    }
}

void task2() {
    for (int i = 1; i <= 5; ++i) {
        cout << "Task 2, step " << i << endl;
    }
}

int main() {
    // Create two threads, each running a different function
    thread t1(task1);
    thread t2(task2);

    // Wait for both threads to finish
    t1.detach();
    t2.detach();

    cout << "Main thread is done!" << endl;
    return 0;
}
