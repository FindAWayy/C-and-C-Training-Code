// Example 2 - Using Field Width and Precision

#include <stdio.h>

int main() {
    int num = 42;
    float num2 = 3.14159;
    printf("Right Aling: |%5d|\n", num);
    printf("Left Aling: |%-5d|\n", num);
    printf("2 decimal places: %.2f\n", num2);
    printf("4 decimal places: %.4f\n", num2);

    return 0;
}

