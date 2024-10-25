// using static and extern 

#include <stdio.h>

void counter() {
    static int count = 0;
    count++;
    printf("Counter: %d\n", count);
}

int main() {
    for (int i = 0; i < 5; i++) {
        counter();
    }
    return 0;
}

////

#include <stdio.h>

extern int globalVar;

void func() {
    printf("Value of globalVar: %d\n", globalVar);
}

int globalVar = 10;

int main() {
    func();
    return 0;
}

