#include <stdio.h>

int main() {
    int base, power;
    unsigned long long result = 1; // Use unsigned long long to handle large results

    // Prompt the user to input the base
    printf("Enter the base: \n");
    scanf("%d", &base);

    // Ensure the base is a whole number
    if (base < 0) {
        printf("Error: Base must be a non-negative whole number.\n");
        return 1;
    }

    // Prompt the user to input the power
    printf("Enter the power: \n");
    scanf("%d", &power);

    // Ensure the power is a positive whole number
    if (power < 0) {
        printf("Error: Power must be a positive whole number.\n");
        return 1;
    }
    

    // Compute the value of the base raised to the power
    for (int i = 0; i < power; ++i) {
        // Within the loop, multiply the result variable by the base
        result *= base;
    }

    // Display the power operation and result
    printf("%d ^ %d is the same as...\n\n", base, power);
    for (int i = 0; i < power; ++i) {
        printf("%d", base);
        if (i < power - 1) {
            printf(" * ");
        }
        
    }
    printf(" which is %llu\n", result);
    
    

    return 0;
}

// not working 
// result
/*
Enter the base:
Enter the power:
2 ^ 5 is the same as...

2 * 2 * 2 * 2 * 2 which is 3
*/
