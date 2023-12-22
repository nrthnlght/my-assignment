#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    for (int i=1; i<=5; i++){
        for ( int j=5; j>=1; j--){
                if (i<=(5+1)-j)
                printf("*");
        else printf(" ");
        }printf("\n");
    }return 0;
}
