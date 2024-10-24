// Compound Arithmetic Operators  

#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int c = 6;
    int d = 20;
    int e = 17;

    a += 3;
    printf("%d\n", a);

    b -= 4;
    printf("%d\n", b);
    
    c *= 2;
    printf("%d\n", c);

    d /= 5;
    printf("%d\n", d);

    e %= 5;
    printf("%d\n", e);

    return 0;
}