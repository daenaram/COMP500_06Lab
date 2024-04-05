#include <stdio.h>

int main() {
    int array[100];
    int totalElements, newValue, insertPosition;

    
    printf("Input total number of elements required:\n");
    scanf("%d", &totalElements);

    for (int i = 0; i < totalElements; i++) {
        printf("Input element [%d]: \n", i);
        // Save the input into the corresponding index in the array
        scanf("%d", &array[i]);
    }

    printf("\nBefore insertion:\n");
    for (int i = 0; i < totalElements; i++) {
        printf("Element [%d] is %d\n", i, array[i]);
    }

    printf("\nInput a new value to insert: \n");
    scanf("%d", &newValue);

    printf("Input where to insert the value %d: \n", newValue);
    scanf("%d", &insertPosition);
    
    for (int i = totalElements; i > insertPosition; i--) {
        array[i] = array[i - 1];
    }

    array[insertPosition] = newValue;

    totalElements++;
    
    printf("After insertion:\n");
    for (int i = 0; i < totalElements; i++) {
        printf("Element [%d] is %d\n", i, array[i]);
    }

    return 0;
}

// result 
/*
Input total number of elements required:
Input element [0]:
Input element [1]:
Input element [2]:
Input element [3]:
Input element [4]:

Before insertion:
Element [0] is 10
Element [1] is 15
Element [2] is 20
Element [3] is 24
Element [4] is 13

Input a new value to insert:
Input where to insert the value 47:
After insertion:
Element [0] is 10
Element [1] is 15
Element [2] is 20
Element [3] is 47
Element [4] is 24
Element [5] is 13
*/
