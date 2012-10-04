#include <stdio.h>

int main(void)
{
/*
     printf("a. happy\nb. add\nc. count\nPlease enter a letter:");
    char theUserInput;
    scanf(" %c", &theUserInput);
    switch(theUserInput)
    {
        case 'a':
            printf("Happy\n");
//            break;
        case 'b':
            printf("Add\n");
            break;
        case 'c':
            printf("Count\n");
//            break;
        default:
            printf("NOOOOOOO\n");
//            break;
    }
*/
    int happitude;
    printf("How happy are you on a scale of 0-3");
    scanf("%d", &happitude);
    switch(happitude)
    {
        default: printf("Exceedingly ");
            break;
        case 6:
            printf("V");
            printf("e");
            printf("r");
            break;
            printf("y");
            printf(" ");
        case 2: printf("Extra ");
                break;
        case "hello": printf("Fractional"); break;
        case 0: printf("Not so ");
            break;
        case 4: printf("Super ");
            break;
    }
    printf(" Happy\n");
    return 0;
}