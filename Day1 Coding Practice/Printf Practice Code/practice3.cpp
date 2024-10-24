// Example 3 - Using Flags and Escape Sequence 

#include <stdio.h>

int main() {
    int num1 = 42;
    int num2 = 7;
    float f = 3.14159;
    char str[] = "Hello, World!";
   
    printf("Formatted Output:\n");

    printf("Left aligned: |%-10d|\n", num1);
    printf("Right aligned: |%10d|\n", num2);
    printf("Padded with zeros: |%05d|\n", num1);
    printf("3 decimal places: |%.3f|\n", f);

    printf("New line and tab:\n");
    printf("Value: %d\n\tThis is indented with a tab.\n", num1);
    printf("String with new line: \"%s\"\n", str);
    printf("String with new line and tab:\n\t\"%s\"\n", str);

    return 0;
}
