#include <stdio.h>

int main() {
    int start, stop, step, iterations = 0;

    printf("Starting number:\n");
    scanf("%d", &start);
    printf("Stopping number:\n");
    scanf("%d", &stop);
    printf("Step size:\n");
    scanf("%d", &step);

    printf("Using a for loop:\n\n");
    printf("Starting at %d...\n\n", start);

    for (int i = start; i <= stop; i += step) {
        printf("In loop: %d...\n", i);
        iterations++;
    }

    printf("\nStopping at %d...\n\n", stop);
    printf("This loop did %d iterations.\n", iterations);

    return 0;
}

// result 
/*
Starting number:
Stopping number:
Step size:
Using a for loop:

Starting at 7...

In loop: 7...
In loop: 10...
In loop: 13...
In loop: 16...
In loop: 19...
In loop: 22...
In loop: 25...
In loop: 28...
In loop: 31...
In loop: 34...

Stopping at 34...

This loop did 10 iterations.
*/
