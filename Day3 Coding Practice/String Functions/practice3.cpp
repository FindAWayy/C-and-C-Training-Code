//using strcat and strncat

#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello";
    char str2[] = ", World!";
    char s1[20] = "Hello";
    char s2[] = ", World!";

    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    strncat(s1, s2, 6);
    printf("Concatenated string: %s\n", str1);
    return 0;
}
