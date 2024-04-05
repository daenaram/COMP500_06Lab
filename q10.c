#include <stdio.h> 
int main(){
    
    int number, sum;
    printf("Enter a non-negative whole number:\n");
    scanf("%d", &number);
    
    if (number < 0){
        return 0;
    }
    
    while (number > 0){
        int digit = number % 10;
        
        sum += digit;
        
        number /= 10;
    }
    
    printf("The sum of the digits entered is %d\n", sum);
    
    return 0;
}

// result 
/* 
Enter a non-negative whole number:
The sum of the digits entered is 15
*/
