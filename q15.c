#include <stdio.h>

int main() {
    int array[500];
    int numOfElements;

    printf("Enter the required number of elements (Max 500):\n\n");
    scanf("%d", &numOfElements);

    if (numOfElements <= 0 || numOfElements > 500) {
        printf("Invalid input! Number of elements must be between 1 and 500.\n");
        return 1;
    }

    printf("Now enter the %d elements of the array...\n\n", numOfElements);

    for (int i = 0; i < numOfElements; i++) {
        printf("Set [%d] to: \n", i);
        scanf("%d", &array[i]);
    }

    printf("\nThe elements in the array are: \n\n{ ");
    for (int i = 0; i < numOfElements; i++) {
        printf("%d", array[i]);
        if (i < numOfElements - 1) {
            printf(", ");
        }
    }
    printf(" } \n");

    return 0;
}

// result 
/*
Enter the required number of elements (Max 500):

Now enter the 10 elements of the array...

Set [0] to:
Set [1] to:
Set [2] to:
Set [3] to:
Set [4] to:
Set [5] to:
Set [6] to:
Set [7] to:
Set [8] to:
Set [9] to:

The elements in the array are:

{ 2, 5, 7, 1, 4, 6, 7, 9, 3, 1 }
*/
