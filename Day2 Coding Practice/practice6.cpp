// Sizeof Operator 

#include <stdio.h>

int main() {
    int a;
    double b;
    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of double: %zu bytes\n", sizeof(b));
    printf("Size of expression (a + b): %zu bytes\n", sizeof(a + b));
    return 0;
}