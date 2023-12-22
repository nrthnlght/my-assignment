#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>

char nama [20], ulang, status;
int nim;

void jamPasir ()
{
    do {
        int tinggi, i, j;

        system ("cls");
        if(tolower(status)=='y')
            exit (0);

        system ("cls");
        printf ("masukkan tinggi (angka ganjil) : ");
        scanf ("%d", &tinggi);

        for (int j = 1; j <= tinggi; j++)
            {
                printf ("*");
            }
            printf ("\n");
        for ( int i = 1; i <= tinggi; i++){for ( int j = 1; j <= tinggi; j++)
            if (j == i)printf ("X");
            else if (j + i == ( tinggi + 1)) printf("X");
            else printf(" ");

            printf("\n");
        }
        for (int j = 1; j <= tinggi; j++)
            {
                printf ("*");
            }

        printf ("\n\n");
        printf("Apakah ingin mengulangi lagi? (y/n): ");
        scanf("%s", &ulang);

    }while (ulang != 'n');
}


int main (void)
{
            int pilihan;

            system ("cls");
            printf ("--------------------------\n");
            printf (".......SPESIAL NIH!.......\n");
            printf ("......PILIH SEMAUMU!......\n");
            printf ("--------------------------\n\n");
            printf ("WELCOME!\n");
            printf ("Masukkan data \n");
            printf ("Nama : ");
            scanf ("%[^\n]s", &nama);
            printf ("NIM : ");
            scanf ("%i", &nim);
            printf ("Tekan enter !");
            getch ();

            system ("cls");

    do{
            system ("cls");
            if(toupper(status)=='n')
            atas:
            printf ("--------------------------\n");
            printf ("MENU %s - %i\n", nama, nim);
            printf ("--------------------------\n");
            printf ("Hallo %s !\n", nama);
            printf ("1. Jam pasir\n");
            printf ("2. Konversi mata uang\n");
            printf ("3. Exit\n");
            printf ("masukkan pilihan : ");
            scanf ("%i", &pilihan);

            switch (pilihan){
            case 1 :
                jamPasir();
                break;
            case 2 :
                do{

                int kurs, nominal;
                double hasil;



                system ("cls");
                printf ("Daftar mata uang : \n");
                printf ("1. IDR ke AUD\n");
                printf ("2. IDR ke USD\n");
                printf ("3. IDR ke JPY\n");
                printf ("4. IDR ke RUB\n");
                printf ("Pilih salah satu : ");
                scanf ("%i", &kurs);

                switch (kurs){
                    case 1 :
                        printf ("masukkan nominal : ");
                        scanf ("%d", &nominal);
                        hasil = nominal * 0.000097;
                        printf ("%f", hasil);
                        getch();
                            break;
                    case 2 :
                        printf ("masukkan nominal : ");
                        scanf ("%d", &nominal);
                        hasil = nominal * 0.000070;
                        printf ("%f", hasil);
                        getch();
                            break;
                    case 3 :
                        printf ("masukkan nominal : ");
                        scanf ("%d", &nominal);
                        hasil = nominal * 0.000078;
                        printf ("%f", hasil);
                        getch();
                            break;
                    case 4 :
                        printf ("masukkan nominal : ");
                        scanf ("%d", &nominal);
                        hasil = nominal * 0.000051;
                        printf ("%f", hasil);
                        getch();
                            break;
                    }
                printf ("\n");
                printf("Apakah ingin mengulangi lagi? (y/n): ");
                scanf("%s", &ulang);
            } while (ulang != 'n');
                system ("cls");
                goto atas;
                        break;
                    case 3 :
                        exit (0);
                    }
            } while (ulang != 3);

}

