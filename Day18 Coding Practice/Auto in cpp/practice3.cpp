// Auto using different data structures 

#include <bits/stdc++.h>
using namespace std;

int main() {

    array<int, 5> arr = {10, 20, 30, 40, 50};

    cout << "1. Array Iteration ( using auto )\n";
    for (auto it = arr.begin(); it != arr.end(); ++it) {
        cout << *it << " ";
    }
    cout <<endl;

    // 2. Vector
    cout << "2. Vector Iteration (using auto):\n";
    vector<int> vec = {5, 10, 15, 20, 25};
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout <<endl;

    // 3. List
    cout << "3. List Iteration (using auto):\n";
    list<string> lst = {"apple", "banana", "cherry", "date"};
    for (auto& fruit : lst) {
        cout << fruit << " ";
    }
    cout <<endl;

    // 4. Set
    cout << "4. Set Iteration (using auto):\n";
    set<int> s = {100, 200, 300, 400, 500};
    for (auto it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";
    }
    cout <<endl;
    
    // 5. Stack
    cout << "5. Stack Iteration (using auto):\n";
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    while (!st.empty()) {
        auto elem = st.top();
        cout << elem << " ";
        st.pop();
    }
    cout <<endl;
    
    //6. Queue
    cout << "6. Queue Iteration (using auto):\n";
    queue<int> q;
    q.push(100);
    q.push(200);
    q.push(300);
    q.push(400);
    q.push(500);
    while (!q.empty()) {
    auto elem = q.front();
    cout << elem << " ";
    q.pop();
}
    
    return 0;
}
