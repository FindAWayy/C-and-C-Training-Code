// using gettick() function in c 

#include <stdio.h>
#include <time.h>

long gettick() {
    return (long)clock(); // Return clock ticks since program started
}

int main() {
    printf("Starting...\n");

    long start_ticks = gettick();

    for (long i = 0; i < 100000000; i++); 

    long end_ticks = gettick();

    double elapsed_time = (double)(end_ticks - start_ticks) / CLOCKS_PER_SEC;

    printf("Elapsed time: %.2f seconds\n", elapsed_time);

    return 0;
}
