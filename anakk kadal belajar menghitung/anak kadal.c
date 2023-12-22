#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int deret=3,i,angkaAwal;

    printf("Masukkan angka: ");
    scanf("%d",&angkaAwal);

    if (angkaAwal%2==0)
    {
        for (i=1; i<=deret; i++)
        {
            printf("%d ",angkaAwal+1);
            angkaAwal +=1;
        }
        printf("\n");
    }
    else
    {
        for (i=1; i<=deret; i++)
        {
        printf("%d ", angkaAwal+2);
        angkaAwal+=2;
        }
        printf("\n");
    }
    return 0;

}

