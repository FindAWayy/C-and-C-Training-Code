// using auto and register

#include <stdio.h>

void func() {
    auto int a = 10;
    printf("Inside func: a = %d\n", a);
}

int main() {
    func();
    return 0;
}

/////

#include <stdio.h>

void func() {
    register int count;
    for (count = 0; count < 5; count++) {
        printf("%d ", count);
    }
    printf("\n");
}

int main() {
    func();
    return 0;
}

