// Derived Data Types 
#include <stdio.h>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}


// Strings
#include <stdio.h>

int main() {
    char name[] = "Hardik";

    printf("String: %s\n", name);

    return 0;
}

//Pointers 
#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num; // Pointer to the integer

    printf("Number: %d\n", num);
    printf("Address: %p\n", (void*)ptr);
    printf("Value assinged to ptr: %d\n", *ptr);

    return 0;
}


