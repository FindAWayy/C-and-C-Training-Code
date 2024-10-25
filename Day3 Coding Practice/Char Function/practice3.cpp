// using fgets and putchar and getchar 

#include <stdio.h>

int main() {
    char buffer[100];
    printf("Enter a string: ");
    fgets(buffer, sizeof(buffer), stdin);
    printf("You entered: %s", buffer);
    return 0;
}

//Echo code 

#include <stdio.h>

int main() {
    int ch;
    printf("Type characters (Ctrl+D to end):\n");
    while ((ch = getchar()) != EOF) {
        putchar(ch);
    }
    return 0;
}
