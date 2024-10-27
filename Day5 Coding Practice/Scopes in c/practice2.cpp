// file scope and static scope

#include <stdio.h>

int globalVar = 50;

void myFunction() {
    printf("globalVar: %d\n", globalVar);
}

int main() {
    myFunction();
    printf("globalVar: %d\n", globalVar);
    return 0;
}


// static scope 

#include <stdio.h>

void myFunction() {
    static int count = 0;
    count++;
    printf("Count: %d\n", count);
}

int main() {
    myFunction(); // Count: 1
    myFunction(); // Count: 2
    return 0;
}

