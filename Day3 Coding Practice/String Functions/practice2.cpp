// using strcpy and strncpy

#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello, World!";
    char src2[] = "Have a Good Day!";
    char dest[20];
    char dest2[20];
    strcpy(dest, src);
    printf("Copied string: %s\n", dest);

    strncpy(dest, src, 5);
    dest[5] = '\0'; 
    printf("Copied string: %s\n", dest);

    return 0;
}


