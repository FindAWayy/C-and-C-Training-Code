// isalpha and isdigit and isalnum

#include <stdio.h>
#include <ctype.h>

int main() {
    char c = 'A';
    if (isalpha(c)) {
        printf("%c is an alphabetic character.\n", c);
    }
    return 0;
}

////

#include <stdio.h>
#include <ctype.h>

int main() {
    char c = '5';
    if (isdigit(c)) {
        printf("%c is a digit.\n", c);
    }
    return 0;
}

////

#include <stdio.h>
#include <ctype.h>

int main() {
    char c = '9';
    if (isalnum(c)) {
        printf("%c is an alphanumeric character.\n", c);
    }
    return 0;
}


