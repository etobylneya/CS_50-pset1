#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    float change = 0;
    do
    {
        change = get_float("Change owed: ");
    }
    while (change < 0);
    int cents = round(change * 100);
    //printf ("%d\n", cents);
    int coins = 0;
    while (cents > 0)
    {
        while(cents>=25)
        {
            cents=cents-25;
            coins++;
        }
        while (cents>=10 && cents <25)
        {
            cents=cents-10;
            coins++;
        }
        while (cents >=5 && cents <10)
        {
            cents=cents-5;
            coins++;
        }
        while (cents>=1 && cents <5)
        {
            cents=cents-1;
            coins++;
        }
        
    }
    printf("%d\n", coins);
}