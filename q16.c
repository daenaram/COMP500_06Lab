#include <stdio.h>

int main(){
    
    int count = 70;
    
    while (count > 0){
        printf("%d\n", count);
       
        count -= 2;
    }
    
    printf("0");
    
    return 0;
}

/*
Task: Create a program that counts down from 70 to 0, decreasing by 2 each step using a loop.

Expected Output:

css
70, 68, 66, ... down to 0
Tips:

Keep your code tidy and well-spaced.
Use meaningful variable names.
*/
