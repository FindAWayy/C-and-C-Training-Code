// Example 1 - Using scanf using different ways

#include <stdio.h>

int main() {
    int a;
    float b;
    char c;
    char str[50];
    int num;
    int n1, n2;

    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);

    printf("Enter an integer, a float, a character, and a string: ");
    scanf("%d %f %c %s", &a, &b, &c, str);
    printf("You entered: %d, %.2f, %c, %s\n", a, b, c, str);

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Sum: %d\n", a + b);
    return 0;
}



