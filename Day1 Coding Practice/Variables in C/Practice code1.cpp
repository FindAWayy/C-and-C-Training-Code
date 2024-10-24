// Basic Data Types

#include <stdio.h>

int main() {
    int age = 30;
    short s = 1000;
    long l = 100000L;
    long long ll = 10000000000LL;
    float salary = 50000.50;
    char grade = 'A'; 
    double height = 5.9 ; 

    printf("Integer: %d\n", age);
    printf("Short: %d\n", s);
    printf("Long: %ld\n", l);
    printf("Long Long: %lld\n", ll);
    printf("Age: %d\n", age);                // %d is for integers
    printf("Salary: %.2f\n", salary);        // %.2f is for float (2 decimal places)
    printf("Grade: %c\n", grade);            // %c is for characters
    printf("Height: %.1f\n", height);

    return 0;
}        



