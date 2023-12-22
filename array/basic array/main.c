#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ()
{
    char nim [10];
    nim [1] = '6';
    nim [2] = '7';
    nim [3] = '2';
    nim [4] = '0';
    nim [5] = '2';
    nim [6] = '2';
    nim [7] = '2';
    nim [8] = '1';
    nim [9] = '7';

    int i,j,temp;

    while (1){
    system ("cls");

    char temp = nim [1];
    for (j=i;j<9;j++){
        nim[j] = nim[j+1];
    }
    nim [j] = temp;

    for(i=1; i<=9; i++){
        printf("%c", nim[i]);
    }

    for (i=1;i<=5000;i++)
        for(j=1;j<10000;j++);

    puts("");
    return 0;
}
}
