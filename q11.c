#include <stdio.h>
#include <string.h>

int main() {
    char inputWord[128];
    char reversedWord[128];
    
    printf("Enter a word:\n");
    scanf("%s", inputWord);
    
    // Get the length of the input word
    int length = strlen(inputWord);
    
    for (int i = 0; i < length; i++) {
        reversedWord[i] = inputWord[length - i - 1];
    }
    reversedWord[length] = '\0'; // Add null terminator to the end of the reversed word
    
    // Display the reversed word
    printf("Reversed: %s\n", reversedWord);
    
    return 0;
}

// result
/*
Enter a word:
Reversed: tpyrcne
*/
