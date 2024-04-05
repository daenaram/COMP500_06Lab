#include <stdio.h>

int main() {
    char ascii;
    int repeat;
    
    printf("ASCII Symbol?\n");
    scanf(" %c", &ascii);
    
    printf("Repeat Count?\n");
    scanf("%d", &repeat);
    
    for (int i = 0; i < repeat; i++) {
        printf("%c", ascii);
        
        if (i < repeat - 1) {
            printf(" ");
        }
    }
    
    printf("\n");
    
    return 0;
}

/*
ASCII Symbol?
Repeat Count?
$ $ $ $ $ $ $
*/
