#include <stdio.h>

int main(){
    
    int start, end, step;
    
    printf("Count down start?\n");
    scanf("%d", &start);
    
    printf("Count down end?\n");
    scanf("%d", &end);
    
    printf("Step size?\n");
    scanf("%d", &step);
    
    for (int i = start; i >= end; i -= step){
        printf("%d", i);
        
        if (i > end){
            printf(", ");
        }
    }
    
    
    return 0;
}

// not working 
// result 
/* 
Count down start?
Count down end?
Step size?
6, 5, 4, 3, 2, 1
*/ 
