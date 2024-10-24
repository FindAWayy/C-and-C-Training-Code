//using strcmp

#include <stdio.h>
#include <string.h>

int main() {
    char *str1 = "apple";
    char *str2 = "banana";
    int result = strcmp(str1, str2);
    if (result < 0) {
        printf("%s is less than %s\n", str1, str2);
    } else if (result > 0) {
        printf("%s is greater than %s\n", str1, str2);
    } else {
        printf("%s is equal to %s\n", str1, str2);
    }
    return 0;
}

// strncmp 

#include <stdio.h>
#include <string.h>

int main() {
    char *str1 = "apple";
    char *str2 = "apricot";
    int result = strncmp(str1, str2, 3);
// it will compare first 3 characters 
    if (result < 0) {
        printf("%s is less than %s\n", str1, str2);
    } else {
        printf("%s is not less than %s\n", str1, str2);
    }
    return 0;
}

