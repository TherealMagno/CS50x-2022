#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    do
    {
        h = get_int("Height: ");
    }
    while (h < 1 || h > 8);


    for (int i = 0; i < h; i = i + 1)
    {
        for (int b = 0; b < h; b = b + 1)
        {
            if (i + b < h - 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }

        }
        printf("\n");
    }
}



