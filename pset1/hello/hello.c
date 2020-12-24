#include <stdio.h>
#include <cs50.h>

int main ()
{
    printf("Hello, type your name here:");
    string name = get_string("");
    printf ("hello, %s\n", name);
    return 0;
}
