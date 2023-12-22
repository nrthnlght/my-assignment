#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a,b,i,n;

    printf ("masukkan angka 1 : ");
    scanf ("%d", &a);
    printf ("masukkan angka 2 : ");
    scanf ("%d", &b);

    printf ("masukkan angka n : ");
    scanf ("%d", &n);

    for (i=1; i<=n; i++) {
    printf("%d ",i);

    printf("\n");

    if (i %a == 0 && i %b == 0){
          printf ("boomduarr");
    }
    else if (i %a == 0){
        printf ("boom");
    }
    else if (i %b == 0){
        printf ("duarr");
    }
    else(i ==! 0);

    }return 0;
}
