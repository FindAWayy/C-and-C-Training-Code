// Using Pointers and Dynamic Formatting 

#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;
    int width = 10;
    int precision = 4;
    float f = 3.14159;

    printf("Pointer value: %p\n", (void*)ptr);
    printf("Dynamic width and precision: %*.*f\n", width, precision, pi);

    return 0;
}




    


