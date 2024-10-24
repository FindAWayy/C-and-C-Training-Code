#include <stdio.h>

int main() {
    int a = 10, b = 3;
    double x = 5.5, y = 2.0;
    int a2 = 5;
    double b2 = 2.5;

    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
    printf("Division: %d / %d = %d\n", a, b, a / b);
    printf("Modulus: %d %% %d = %d\n", a, b, a % b);

    printf("Addition: %06.2f + %.2f = %.2f\n", x, y, x + y);
    printf("Division: %.2f / %.2f = %.2f\n", x, y, x / y);

    printf("Mixed Addition: %d + %.1f = %.2f\n", a, b, a + b);



    return 0;
}
