#import <cs50.h>
#import <stdio.h>


int main (void)
{
    char letter = get_char("Do you agreed? ");

    if (letter == 'Y' || letter == 'y')
    {
        printf("You are agreed.\n");
    }
    else
    {
        printf("You're not agreed \n");
    }
}