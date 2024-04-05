#include <stdio.h>

int main(void)
{
    int month;
    
    printf("Enter a month ");
    printf("(Jan is 1, Dec is 12): \n");
    
    scanf("%d", &month);
    
    switch (month)
    {
        case 1: 
        case 3: 
        case 5: 
        case 7: 
        case 8: 
        case 10:
        case 12:
            {
                printf("That month has 31 days in it.\n");
                break;
            }

        case 4:    
        case 6:    
        case 9:    
        case 11:    
            {
                printf("That month has 30 days in it.\n");
                break;
            }
        case 2: 
        {
            printf("That month has 28 or 29 days in it.");
            break;
        }

        default:
            {
                printf("Invalid month!\n");
                break;
            }
    }

    return 0;
}

// from yatharth
// result 
// Enter a month (Jan is 1, Dec is 12):
// That month has 31 days in it.
