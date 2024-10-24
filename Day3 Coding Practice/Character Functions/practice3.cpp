// counting character types 

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "Hello, World! 123";
    int letters = 0, digits = 0, spaces = 0, specials = 0;
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) letters++;
        else if (isdigit(str[i])) digits++;
        else if (isspace(str[i])) spaces++;
        else specials++;
    }

    printf("Letters: %d\n", letters);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    printf("Special characters: %d\n", specials);
    
    return 0;
}
