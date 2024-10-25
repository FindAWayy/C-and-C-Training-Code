// using exit in c 

#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;

    printf("Enter a positive integer (0 to exit): ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Negative numbers are not allowed. Exiting with status 1.\n");
        exit(1); // not success
    } else if (number == 0) {
        printf("Exiting the program gracefully with status 0.\n");
        exit(0); // success
    }

    printf("You entered: %d\n", number);
    printf("Exiting normally with status 0.\n");
    exit(0); // success
}
