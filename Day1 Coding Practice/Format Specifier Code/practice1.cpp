#include <stdio.h>

int main() {
   

    int num = -42;
    unsigned int unum = 42;

    float num2 = 3.14159;
    double num3 = 2.718281828;
    char ch = 'A';
    char string[] = "Hello, World!";
    int *ptr = &num;

    printf("Integer: %d\n", num);
    printf("Unsigned Integer: %u\n", unum);
    printf("Octal: %o\n", unum);
    printf("Hexadecimal lowercase: %x\n", unum);
    printf("Hexadecimal uppercase: %X\n", unum);
    printf("Floating-point: %f\n", num2);
    printf("lowercase: %e\n", num2);
    printf("uppercase: %E\n", num2);
    printf("Double: %lf\n", num3);
    printf("Character: %c\n", ch);
    printf("String: %s\n", string);
    printf("Pointer Address: %p\n", (void*)ptr);
    printf("Left-aligned: |%-10d|\n", num);
    printf("With sign: %+d\n", num);

    return 0;
}
