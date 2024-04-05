#include <stdio.h>

int main() {
    int number;

    printf("Enter a whole number:\n");
    scanf("%d", &number);

    printf("The %d Times Table:\n", number);
    printf("------------------\n\n");
    
    for (int i = 0; i <= 14; i++) {
        printf("%d x %d = %d\n", i, number, i * number);
    }

    return 0;
}

/*
Enter a whole number:
The 7 Times Table:
------------------

0 x 7 = 0
1 x 7 = 7
2 x 7 = 14
3 x 7 = 21
4 x 7 = 28
5 x 7 = 35
6 x 7 = 42
7 x 7 = 49
8 x 7 = 56
9 x 7 = 63
10 x 7 = 70
11 x 7 = 77
12 x 7 = 84
13 x 7 = 91
14 x 7 = 98
*/
