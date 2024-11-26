// Lambda function 

#include <iostream>
usinag namespace std  ; 

int main() {

    auto add = [](int a, int b) -> int {
        return a + b;
    };

    int result = add(5, 3);
    cout << "Sum: " << result << endl; 

    return 0;
}


//  Capture by Value

int main() {
    int x = 10, y = 20;

    // Lambda captures x and y by value
    auto add = [x, y]() -> int {
        return x + y;
    };

    cout << "Sum: " << add() << endl; 
    return 0;
}

//  Capture by Reference

int main() {
    int x = 10, y = 20;

    // Lambda captures x and y by reference
    auto add = [&x, &y]() -> int {
        x += 5;  // Modifies the original x
        y += 10; // Modifies the original y
        return x + y;
    };

    cout << "Sum: " << add() << endl;  
    cout << "Modified x: " << x << endl; 
    cout << "Modified y: " << y << endl; 
    return 0;
}




