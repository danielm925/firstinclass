/*include stdio.h, stdlib.h, and time.h*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Create main*/
int main()
{
    /*declare needed variables*/
    int foodChoice;
    float taxPercent;
    float tipPercent;
    float foodChoiceCost;

    /*variables used just for choosing random number*/
    int i, n;
    time_t t;

    n = 1;

    /* Init random number generator */
    srand((unsigned) time(&t));

    /* Pick a random number between 0 and 3*/
        foodChoice = rand() % 4;

    /* Assign food using random number */
    switch(foodChoice) {
        case 0 :
            foodChoiceCost = 9.95;
            printf("You ate a salad which costs $%.2f!\n", foodChoiceCost );
            break;
        case 1 :
            foodChoiceCost = 4.55;
            printf("You ate soup which costs $%.2f!\n", foodChoiceCost );
            break;
        case 2 :
            foodChoiceCost = 13.25;
            printf("You ate a sandwich which costs $%.2f!\n", foodChoiceCost );
            break;
        case 3 :
            foodChoiceCost = 22.35;
            printf("You ate a pizza which costs $%.2f!\n", foodChoiceCost );
            break;
   }

   /* Calculating tax, tip, and total */
   printf("What would you like the tip to be on the meal percentage wise?\n");
   scanf("%f", &tipPercent);
   float tip = (foodChoiceCost * (tipPercent/100));

   printf("What about the tax?\n");
   scanf("%f", &taxPercent);
   float tax = (foodChoiceCost * (taxPercent/100));

   float totalBill = foodChoiceCost + tax + tip;

   //Print meal cost, tip, tax, and total cost to user
   printf("Here is the dollar amount for everything:\n");
   printf("Meal Cost: $%.2f\n", foodChoiceCost);
   printf("Tip: $%.2f\n", tip);
   printf("Tax: $%.2f\n", tax);
   printf("Total: $%.2f\n", totalBill);

    return 0;
}