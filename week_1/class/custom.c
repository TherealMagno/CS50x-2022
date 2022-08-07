#import <stdio.h>


void hola (void)
{
    printf("Hola");
}

int main (void)
{
    for (int n = 0 ; n < 4; n++)
    {
        hola();
    }
}