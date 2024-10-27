// Block scope and function scope #include <stdio.h>

int main() {
    int x = 10; // x has block scope
    if (x > 5) {
        int y = 20; // y has block scope
        printf("x: %d, y: %d\n", x, y);
    }
    // printf("%d", y); // This would cause an error
    return 0;
}

////

#include <stdio.h>

void myFunction() {
    int z = 30; // z has function scope
    printf("z: %d\n", z);
}

int main() {
    myFunction();
    // z is not accessible here
    // printf("%d", z);
    return 0;
}



