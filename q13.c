#include <stdio.h>

int main() {
    int numbers[7];
    int multiplier;
    
    printf("Input seven whole numbers:\n");
    printf("--------------------------\n\n");
    
    for (int i = 0; i < 7; i++) {
        printf("Enter number %d: \n", i + 1);
        
        scanf("%d", &numbers[i]);
    }
    
    printf("\nThe seven numbers are: { ");
    for (int i = 0; i < 7; i++) {
        printf("%d", numbers[i]);
        if (i < 6) {
            printf(", ");
        }
    }
    printf(" }\n\n");
    
    printf("Multiplier?\n\n");
    scanf("%d", &multiplier);
    
    for (int i = 0; i < 7; i++) {
        numbers[i] *= multiplier;
    }
    
    printf("The seven numbers are now: { ");
    for (int i = 0; i < 7; i++) {
        printf("%d", numbers[i]);
        if (i < 6) {
            printf(", ");
        }
    }
    printf(" }\n");
    
    return 0;
}

// result 
/*
Input seven whole numbers:
--------------------------

Enter number 1:
Enter number 2:
Enter number 3:
Enter number 4:
Enter number 5:
Enter number 6:
Enter number 7:

The seven numbers are: { 12, 8, 3, 9, 1, 11, 5 }

Multiplier?

The seven numbers are now: { 36, 24, 9, 27, 3, 33, 15 }
*/
