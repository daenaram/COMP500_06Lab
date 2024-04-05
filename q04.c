#include <stdio.h>
int main(){
    
    int number;
    
    printf("Please enter a whole number:\n");
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("%d is even.", number);
    }
    else {
        printf("%d is odd.", number);
    }
}

// result 
//Please enter a whole number:
// 3 is odd.
