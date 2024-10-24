//using strchr and strrchr

#include <stdio.h>
#include <string.h>

int main() {
    char *str = "Hello, World!";
    char *ptr = strchr(str, 'o');
    char *ptr2 = strrchr(str, 'o');
    if (ptr) {
        printf("Found 'o' at position: %d\n", ptr - str );
    } else {
        printf("'o' not found\n");
    }

    if (ptr2) {
       printf("Found last 'o' at position: %d\n", ptr - str); 
    } else {
       printf("'o' not found\n");
    }

    return 0;
}

