// Example 3 - Using scanf with strings

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("You entered: %c\n", ch);

    char name[50];
    printf("Enter your name: ");
    scanf("%s", name); // only until a space is encountered
    printf("Hello, %s.\n", name);

    char name2[50];
    printf("Enter your name ");
    scanf("%10s", name2); // Limit to 10 characters
    printf("Hello, %s\n", name2);

    return 0;
}
