#include <stdio.h>
int main() {
    
    char secretWord[128];
    printf("Enter a secret word:\n");
    scanf("%s", secretWord);
    
    int i = 0;
    while (secretWord[i] != '\0') {
        secretWord[i]--;
        
        if (secretWord[i] < 'A') {
            secretWord[i] = 'Z';
        } else if (secretWord[i] < 'a' && secretWord[i] > 'Z') {
            secretWord[i] = 'z';
        }
        
        i++;
    }
    
    printf("Decrypted: %s\n", secretWord);
    
    return 0;
}

/*
Enter a secret word:
Decrypted: hello
*/
