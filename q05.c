#include <stdio.h>
int main(){
    
    char inputWord[128];
    
    printf("Input a word:\n");
    scanf("%[^\n]", inputWord);
    
    for(int i = 0; inputWord[i] != '\0'; i++) {
        printf("%c\n", inputWord[i]);
    }
}
