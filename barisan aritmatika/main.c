#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int bil = 3;

    for (bil ; bil <= 30; bil = bil + 3){
        printf ("%d", bil);
        printf (" ");
    }
    return 0;

}


int main ()
{
    int i, j, bil = 3, beda = 4;

    for (i = 3; i <= 10, i++){
        printf ("%i", bil);
        printf (" ");
        bil += beda;
        beda *= 2;
    }
    return 0;
}
