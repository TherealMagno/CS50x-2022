#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Width: ");
    }
    while (n < 5); //El codigo parará cuando la condición sea verdadera.

    for (int i = 0; i < n; i++)
    {
        printf("?");
    }
    printf("\n");
}