//using strstr

#include <stdio.h>
#include <string.h>

int main() {
    char *str = "Hello, World!";
    char *substr = "World";
    char *ptr = strstr(str, substr);
    if (ptr) {
        printf("Found substring at position: %d\n", ptr - str);
    } else {
        printf("Substring not found\n");
    }
    return 0;
}
