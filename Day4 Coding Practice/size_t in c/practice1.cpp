// using size_t 

#include <stdio.h>
#include <stddef.h>

int main() {
    int arr[10];
    
    size_t size = sizeof(arr) / sizeof(arr[0]);

    printf("The array has %zu elements.\n", size);

    for (size_t i = 0; i < size; i++) {
        arr[i] = (int)(i * i);
    }

    for (size_t i = 0; i < size; i++) {
        printf("arr[%zu] = %d\n", i, arr[i]);
    }

    return 0;
}
