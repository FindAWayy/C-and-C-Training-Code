// Pointer Operator 

#include <stdio.h>

int main() {
    int a = 42;
    int *ptr = &a;
    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", (void*)&a);
    printf("Value at ptr: %d\n", *ptr);
    return 0;
}
