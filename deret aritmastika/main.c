#include <stdio.h>

int main ()
{
    int i, bil = 3, beda = 4;

    for (i = 3; i <= 10; i++)
    {
        printf ("%i", bil);
        printf (" ");
        bil += beda;
        beda *= 2;
    }
    return 0;
}
