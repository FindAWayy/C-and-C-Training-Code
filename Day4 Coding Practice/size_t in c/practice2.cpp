// used size_t in strings 

#include <stdio.h>
#include <string.h>

int main() {
    char *str = "Hello, World!";
    
    size_t length = strlen(str);
    
    printf("The length of the string is %zu characters.\n", length);

    return 0;
}

//// 

#include <stdio.h>
#include <stddef.h>

int main() {
    size_t a = 5;
    size_t b = 10;

    if (a < b) {
        printf("a (%zu) is less than b (%zu)\n", a, b);
    } else {
        printf("a (%zu) is not less than b (%zu)\n", a, b);
    }

    return 0;
}

