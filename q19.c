#include <stdio.h>
int main(){
    char suit;
    char rank;
    printf("Suit (d/h/s/c):\n");
    printf("Rank (A/2/3/4/5/6/7/8/9/T/J/Q/K):\n");
    scanf(" %c",&suit);
    scanf(" %c",&rank);

    switch (suit){
        case 'd':
        switch (rank){
            case 'A':
            printf("Ace of Diamonds");
            break;
            case '2':
            printf("Two of Diamonds");
            break;
            case '3':
            printf("Three of Diamonds");
            break;
            case '4':
            printf("Four of Diamonds");
            break;
            case '5':
            printf("Five of Diamonds");
            break;
            case '6':
            printf("Six of Diamonds");
            break;
            case '7':
            printf("Seven of Diamonds");
            break;
            case '8':
            printf("Eight of Diamonds");
            break;
            case '9':
            printf("Nine of Diamonds");
            break;
            case 'T':
            printf("Ten of Diamonds");
            break;
            case 'J':
            printf("Jack of Diamonds");
            break;
            case 'Q':
            printf("Queen of Diamonds");
            break;
            case 'K':
            printf("King of Diamonds");
            break;
            default:
            printf("Invalid Rank");
            break;
        }
        break;
        case 'h':
        switch (rank){
            case 'A':
            printf("Ace of Heart");
            break;
            case '2':
            printf("Two of Heart");
            break;
            case '3':
            printf("Three of Heart");
            break;
            case '4':
            printf("Four of Heart");
            break;
            case '5':
            printf("Five of Heart");
            break;
            case '6':
            printf("Six of Heart");
            break;
            case '7':
            printf("Seven of Heart");
            break;
            case '8':
            printf("Eight of Heart");
            break;
            case '9':
            printf("Nine of Heart");
            break;
            case 'T':
            printf("Ten of Heart");
            break;
            case 'J':
            printf("Jack of Heart");
            break;
            case 'Q':
            printf("Queen of Heart");
            break;
            case 'K':
            printf("King of Heart");
            break;
            default:
            printf("Invalid Rank");
            break;
        }
        break;
        case 's':
        switch (rank){
            case 'A':
            printf("Ace of Spades");
            break;
            case '2':
            printf("Two of Spades");
            break;
            case '3':
            printf("Three of Spades");
            break;
            case '4':
            printf("Four of Spades");
            break;
            case '5':
            printf("Five of Spades");
            break;
            case '6':
            printf("Six of Spades");
            break;
            case '7':
            printf("Seven of Spades");
            break;
            case '8':
            printf("Eight of Spades");
            break;
            case '9':
            printf("Nine of Spades");
            break;
            case 'T':
            printf("Ten of Spades");
            break;
            case 'J':
            printf("Jack of Spades");
            break;
            case 'Q':
            printf("Queen of Spades");
            break;
            case 'K':
            printf("King of Spades");
            break;
            default:
            printf("Invalid Rank");
            break;
        }
        break;
        case 'c':
        switch (rank){
            case 'A':
            printf("Ace of Clubs");
            break;
            case '2':
            printf("Two of Clubs");
            break;
            case '3':
            printf("Three of Clubs");
            break;
            case '4':
            printf("Four of Clubs");
            break;
            case '5':
            printf("Five of Clubs");
            break;
            case '6':
            printf("Six of Clubs");
            break;
            case '7':
            printf("Seven of Clubs");
            break;
            case '8':
            printf("Eight of Clubs");
            break;
            case '9':
            printf("Nine of Clubs");
            break;
            case 'T':
            printf("Ten of Clubs");
            break;
            case 'J':
            printf("Jack of Clubs");
            break;
            case 'Q':
            printf("Queen of Clubs");
            break;
            case 'K':
            printf("King of Clubs");
            break;
            default:
            printf("Invalid Rank");
            break;
        }
        break;
        default:
        printf("Invalid Suit");
        }
        
        
    }

// from lian 
// result 
/*
Suit (d/h/s/c):
Rank (A/2/3/4/5/6/7/8/9/T/J/Q/K):
Two of Diamonds
*/
