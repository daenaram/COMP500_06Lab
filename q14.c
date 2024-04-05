#include <stdio.h>

int main() {
    int number;
    unsigned long long factorial = 1;

    printf("Enter a non-negative whole number:\n");
    scanf("%d", &number);

    if (number < 0) {
        printf("Bad Input! %d is negative...\n", number);
        return 1;
    }
    
    if (number == 0) {
        printf("0! is 1\n");
        return 0;
    }

    for (int i = number; i >= 1; i--) {
        factorial *= i;
    }

    printf("%d! is %llu\n", number, factorial);

    return 0;
}

// result 
/*
Enter a non-negative whole number:
5! is 120
*/
