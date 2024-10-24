// Different usecase of const 

// 1) Constant Variables

#include <stdio.h>

int main() {
    const int num = 5;
  // We Cannot modify a const variable
    printf("Max Attempts: %d\n", maxAttempts);
    return 0;
}

// 2) Constant Arrays 

#include <stdio.h>

int main() {
    const int numbers[] = {1, 2, 3, 4, 5};
    printf("Numbers: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    // numbers[0] = 10; // We Cannot modify a const array
    return 0;
}





