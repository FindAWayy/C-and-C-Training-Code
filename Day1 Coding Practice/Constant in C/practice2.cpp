// const in Pointers 

#include <stdio.h>

int main() {
    int value = 10;
    const int *ptr = &value; 
    printf("Value: %d\n", *ptr);
    // *ptr = 20; // Cannot modify the value through ptr
       // * Important Note * 
    value = 20; // Allowed since we're changing the original variable
    printf("New Value: %d\n", *ptr);
    return 0;
}

// const in functions 

#include <stdio.h>

void displayValue(const int *value) {
    printf("Value: %d\n", *value);
    // *value = 100; // Not possible
}

int main() {
    int x = 50;
    displayValue(&x);
    return 0;
}




