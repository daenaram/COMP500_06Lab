#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0, multiplication = 1;
    char operation;

    printf("Input five whole numbers:\n");
    printf("--------------------------\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Enter number %d: \n", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nThe five numbers are: { ");
    for (int i = 0; i < 5; i++) {
        printf("%d", numbers[i]);
        if (i < 4) {
            printf(", ");
        }
    }
    printf(" }\n\n");

    printf("Would you like to sum or multiply the elements (s/m)? ");
    scanf(" %c", &operation);

    if (operation == 's' || operation == 'S') {
        for (int i = 0; i < 5; i++) {
            sum += numbers[i];
        }
        printf("\nThe sum of  ");
        for (int i = 0; i < 5; i++) {
            printf("%d", numbers[i]);
            if (i < 4) {
                printf(" + ");
            }
        }
        printf(" is %d\n", sum);
    } else if (operation == 'm' || operation == 'M') {
        for (int i = 0; i < 5; i++) {
            multiplication *= numbers[i];
        }
        printf("\nThe multiplication of  ");
        for (int i = 0; i < 5; i++) {
            printf("%d", numbers[i]);
            if (i < 4) {
                printf(" * ");
            }
        }
        printf(" is %d\n", multiplication);

    return 0;
    
    } 
}

// result 
/*
Input five whole numbers:
--------------------------

Enter number 1:
Enter number 2:
Enter number 3:
Enter number 4:
Enter number 5:

The five numbers are: { 2, 5, 4, 7, 3 }

Would you like to sum or multiply the elements (s/m)?
The sum of  2 + 5 + 4 + 7 + 3 is 21
*/
