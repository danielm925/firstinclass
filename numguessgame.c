/*include stdio.h, stdlib.h, and time.h*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

/*Create main*/
int main()
{
    /* declare/initiliaze needed variables */
    int option;
    int guess;
    int randNum;
    int userCorrectness;
    int maxNum = 10;

    /* Display menu and ask user for input */

    printf("Welcome to the number guessing game! Please choose one of the following options:\n");
    start:
    printf("Press 1 to play the game\n");
    printf("Press 2 to change the max number\n");
    printf("Press 3 to quit\n");
    scanf("%d", &option);

    /*variables used just for choosing random number*/
    int i, n;
    time_t t;

    n = 1;

    /* Init random number generator */
    srand((unsigned) time(&t));

    /* Pick a random number between 1 and max number*/
        randNum = ((rand() % maxNum) + 1);

    /* Game */
    if(option == 1)
    {
        printf("Please pick a number: ");
        scanf("%d", &guess);
        randNum = ((rand() % maxNum) + 1); //generates random number between 1-10

        do
        {
            if ((int)guess != randNum)
            {
                printf("Please try again: ");
                scanf("%d", &guess);
            }
            else
            {
                userCorrectness = 1;
                printf("Congratulations! You got it right! You win!");
            }
        }
        while (userCorrectness == 0);
    }
    else if(option == 2)
    {
        /* User chooses new max */
        printf("Please pick a new max number: \n");
        scanf("%d", &maxNum);
        goto start;
    }
    else if(option == 3)
    {
        printf("Thanks for playing!");
    }
    else
    {
        printf("That is not an option dummy, please choose a valid option.\n");
        goto start;
    }

    return 0;
}