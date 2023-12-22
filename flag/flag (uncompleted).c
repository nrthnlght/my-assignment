#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int a,angka,hasil,i,j,k,l,m,n,o,p;
    do
    {
        menu :
        printf("\nMENU UTAMA");
        printf("\n1. Menu nilai");
        printf("\n2. Menu Perulangan");
        printf("\n3. Exit program");
        printf("\nMasukkan Pilihan Anda : ");
        scanf("%i", &a);
        system("cls");

            switch(a){
            case 1:
                printf("\n");

                printf("Masukkan Angka: ");
                scanf("%d",&angka);

                printf("%d! = ",angka);

                hasil = 1;
                for(i=1; i<=angka; i++)
                {
                    hasil = hasil * i;

                printf("%d",i);
                if(i != angka)
                    {
                        printf (" x ");
                    }
                }
                printf("\n%d! = %d \n", angka, hasil);
                printf("\nJadi hasil faktorial dari %d (%d!) adalah %d", angka, angka, hasil);
                printf("\n");
                break;
            case 2:
                printf("Masukkan jumlah : ");
                scanf("%d",&n);

                for(m=0; m<n; m++)
                {
                    for(o=0; o<n-m; o++)
                    {
                        printf("* ");
                    }
                    for(p=1;p<=n-o;p++)
                    {
                        printf(" ");
                    }
                    for(o=m; o<=n-1; o++)
                    {
                        printf("*  ");
                    }
                    printf("\n");
                }

                for(m=0; m<n; m++)
                {
                    for(o=0; o<=m; o++)
                    {
                        printf("*  ");
                    }
                    for(p=1;p<=n-o;p++)
                    {
                        printf(" ");
                    }
                    for(int o=0;o<m+1;o++)
                    {
                        printf("*  ");
                    }
                    printf("\n");
                }
                break;
            case 3:
                printf("========PROGRAM SELESAI==========");
                exit(0);
                default:printf("\ninvalid input\n");
                break;
        }

    }while(a!=3 );
        system("pause");
        system("cls");
        goto menu;
}
