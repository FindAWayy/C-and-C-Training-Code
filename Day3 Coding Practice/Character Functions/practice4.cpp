// using islower and isupper and isspace

#include <stdio.h>
#include <ctype.h>

int main() {
    char c = 'g';
    if (islower(c)) {
        printf("%c is a lowercase letter.\n", c);
    }
    return 0;
}

////

#include <stdio.h>
#include <ctype.h>

int main() {
    char c = 'G';
    if (isupper(c)) {
        printf("%c is an uppercase letter.\n", c);
    }
    return 0;
}

////

#include <stdio.h>
#include <ctype.h>

int main() {
    char c = ' ';
    if (isspace(c)) {
        printf("Space.\n");
    }
    return 0;
}


