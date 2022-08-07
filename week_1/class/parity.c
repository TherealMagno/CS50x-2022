#import <cs50.h>
#import <stdio.h>


int main (void)
{
    int n = get_int("What's your number? ");
    if ( n % 2 == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
}