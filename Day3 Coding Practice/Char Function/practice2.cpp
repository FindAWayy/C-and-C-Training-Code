// using getchar and putchar

#include <stdio.h>

int main() {
    char ch;
    
    printf("Enter a character: ");
    ch = getchar(); 
    printf("You entered: %c\n", ch);

    return 0;
}

#include <stdio.h>

int main() {
    char ch = 'A';
    
    putchar(ch);

    return 0;
}
