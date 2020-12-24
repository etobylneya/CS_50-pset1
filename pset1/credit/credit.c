#include <stdio.h>
#include <cs50.h>
#include<math.h>

int card_length(long num);
int main(void)
{
    
    long number = get_long("Number: ");
    int dig = card_length(number);
    long other_number = number / 10;
    long first_number = number;
    int other_rem = 0, rem = 0, sum = 0;
    if (dig == 13 || dig == 15 || dig == 16)
    {
        for (int i = 0; i < dig;)
        {
            other_rem = (other_number % 10) * 2;
            if (other_rem > 9)
            {
                other_rem = (other_rem / 10) + (other_rem % 10);
            }
            sum += other_rem;
            other_number = other_number / 100;
            i += 2;
        }
        for (int i = 0; i < dig;)
        {
            rem = (first_number % 10);
            sum += rem;
            first_number = first_number / 100;
            i += 2;
        }
        //printf ("the sum is: %d\n", sum);
        if (sum % 10 == 0)
        {
            int first_two = number / (pow(10, (dig - 2)));
            //printf("the first two are %d\n", first_two);
            if (first_two / 10 == 4)
            {
                printf("VISA\n");
            }
            else if (first_two == 34 || first_two == 37)
            {
                printf("AMEX\n");
            }
            else if (first_two > 50 && first_two < 56)
            {
                printf("MASTERCARD\n");
            }
            else 
            {
                printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else 
    {
        printf("INVALID\n");
    }
}

int card_length(long num)
{
    long temp_num = num;
    int dig = 1;
    while (temp_num / 10 >= 1)
    {
        temp_num = temp_num / 10;
        dig++;
    }
//    printf("%d\n", dig);
    return dig;
}
