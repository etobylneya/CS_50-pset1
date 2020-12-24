#include <stdio.h>
#include <cs50.h>

void print(int i);
int input_check();

int main(void)
{
    int height = input_check(); //assigning the value returned from the func to height variable

    for (int i = 0; i < height; i++)
    {
        for (int spaces = height-1; spaces > i; spaces--)
        {
            printf(" ");
        }
        print(i); //calls a func to print hashes, left column
        printf("  "); //prints 2 spaces between left and right column
        print(i); //calls a func to print hashes, right column
        printf("\n");
    }
}

int input_check()
{
    int height = 0;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
    return height;
}

void print(int i)
{
    for (int k = 0; k <= i; k++)
    {
        printf("#");
    }
}