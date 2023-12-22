#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bilanganFaktorial ()
{
    char ulang;
    int angka,hasil;
    int a;
        do{
            system("cls");
            printf("Menu bilangan faktorial");
            printf("\n");
            printf("masukkan angka : ");
            scanf("%d", &angka);
            printf("\n");

            hasil = 1;

            printf("%d! = ", angka);

            for(a=1; a <= angka; a++) {
                hasil = hasil * a;

            printf("%d",a);
                if (a != angka)
                    {
                        printf (" * ");
                    }
            }

            printf("\n%d! = %d ", angka, hasil);
            printf("\n\n");

            printf("Apakah ingin mengulangi lagi? (y/n): ");
        scanf("%s", &ulang);

            }while (ulang != 'n');
}


void menuPanah()
{
    char ulang;
    int panjang;
        do{
            system ("cls");
            printf("============\n");
            printf("Menu Panah\n");
            printf("============\n");
            printf("masukkan panjang bentuk : ");
            scanf("%d", &panjang);
            printf("\n");

            int a,b;

            for (int a = 0; a < panjang; a++) {
                for (int b = 0; b < panjang-a; b++) {
                    printf(" * ");
                }
                for (b =0; b <a; b++){
                    printf(" ");
                }
                for (int b = 0; b < panjang-a; b++){
                    printf(" * ");
                }
                    printf("\n");
            }
            for (int a = 0; a < panjang; a++)
            {
                for (b =0; b <=a; b++){
                    printf(" * ");
                }
                for (b =1; b < panjang-a; b++){
                    printf(" ");
                }
                for(b =0; b <=a; b++){
                    printf(" * ");
                }
                printf("\n");
            }

        printf("Apakah ingin mengulangi lagi? (y/n): ");
        scanf("%s", &ulang);

        }while (ulang != 'n');
}


int main ()
{
    int pilih;
    do{
        system ("cls");
        printf("Pilih menu : \n");
        printf("1. Bilangan Faktorial(Natania)\n");
        printf("2. Panah(aryo)\n");
        printf("3. Exit program\n");
        printf("masukkan pilihan:");
        scanf("%d", &pilih);
        switch (pilih)
        {
        case 1:
            bilanganFaktorial();
            break;
        case 2:
            menuPanah();
        }
    }while (pilih != 3);
}

