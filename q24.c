#include <stdio.h>

int main() {
    int number;

    printf("? ");
    scanf("%d", &number);

    printf("\n");
    for (int i = 1; i <= number; i++) {
        double reciprocal = 1.0 / i;
        printf("1 / %d is %.6f\n", i, reciprocal);
    }

    return 0;
}

// result
/*
?
1 / 1 is 1.000000
1 / 2 is 0.500000
1 / 3 is 0.333333
1 / 4 is 0.250000
*/
