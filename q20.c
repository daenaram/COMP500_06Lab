#include <stdio.h>

int main() {
    char word[128];
    
    printf("Enter a word to encrypt:\n");
    
    scanf("%s", word);
    
    int i = 0;
    while (word[i] != '\0') {
        if ((word[i] >= 'a' && word[i] < 'z') || (word[i] >= 'A' && word[i] < 'Z')) {
            word[i]++;
        }
        else if (word[i] == 'z') {
            word[i] = 'a';
        }
        else if (word[i] == 'Z') {
            word[i] = 'A';
        }
        i++;
    }
    
    printf("Encrypted: %s\n", word);
    
    return 0;
}

// result 
/*
Enter a word to encrypt:
Encrypted: ifmmp
*/
