// gets and puts in c 

#include <stdio.h>

int main() {
    char buffer[100];
    
    printf("Enter a string: ");
    gets(buffer);
    printf("You entered: %s\n", buffer);

    return 0;
}


#include <stdio.h>

int main() {
    char *message = "Hello, World!";
    
    puts(message);

    return 0;
}