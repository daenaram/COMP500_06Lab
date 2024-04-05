#include <stdio.h>

int main() {
    int number, sum = 0, count = 0;

    while (1) {
        printf("Number (-1 to stop)?\n");
        scanf("%d", &number);

        if (number == -1) {
            if (count == 0) {
                printf("No numbers input.\n");
                return 1;
            }
            break;
        }

        sum += number;
        count++;
    }

    int average = (int) sum / count;

    if (count == 1) {
        printf("The average of the 1 number input is %.d\n", average);
    } else {
        printf("\nThe average of the %d numbers input is %d\n", count, average);
    }

    return 0;
}

// result 
/* Number (-1 to stop)?
Number (-1 to stop)?
Number (-1 to stop)?
Number (-1 to stop)?
Number (-1 to stop)?

The average of the 4 numbers input is 4
*/
