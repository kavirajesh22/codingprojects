#include <cs50.h>
#include<math.h>
#include <stdio.h>

float valid_cash(string prompt);

int main(void)
{
    //just naming a few integers
    //prompt
    float dollars = valid_cash("Change owed: ");
    int cents = round(dollars * 100);
    int coins = 0;

    if (cents > 24)
    {
        do
        {   
            cents = cents - 25;
            coins = coins + 1;
        }
        while (cents > 24);
    }
    
    if (cents < 25 && cents > 9)
    {
        //dimes
        do
        {
            cents = (cents - 10);
            coins = coins + 1;
        }
        while (cents > 9);
    }
  
    if (cents < 10 && cents > 0)
    {
        //nickels
        do
        {
            cents = (cents - 5);
            coins = coins + 1;
        }
        while (cents > 4);
    }

    
    if (cents > 0)
    {
        //pennies
        do
        {
            cents = (cents - 1);
            coins = coins + 1;
        }
        while (cents > 0);
    }
    
    //print the number of coins
    printf("%i\n", coins);
    
}

//this is the function to get the prompt
//float is for any decimal value
float valid_cash(string prompt)
{
    float cash;
    do
    {
        cash = get_float("%s", prompt);
    }
    while (cash < 0);
    return cash;
}
