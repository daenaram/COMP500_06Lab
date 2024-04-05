#include <stdio.h>

int main(){
    
    int n;
    
    printf("n?\n");
    scanf("%d", &n);
    
    printf("[");
    for (int i = 1; i <= n; i ++){
        printf("%d", i);
        
        if (i < n){
            printf("] [");
        }
    }
    printf("]");
}

/*
n?
[1] [2] [3] [4] [5] [6] [7]
*/
