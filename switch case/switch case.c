#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rataRata() {
    char ulang;
    do {
        float nilai1, nilai2, nilai3;
        char nama[30], nim[9];

        system("cls");
        printf("===============\n");
        printf("   MENU NILAI  \n");
        printf("===============\n");
        printf("Masukkan nama: ");
        scanf(" %[^\n]s", &nama);
        printf("Masukkan NIM: ");
        scanf("%s", &nim);
        printf("\n\n");
        printf("Masukkan nilai Matematika Diskrit: ");
        scanf("%f", &nilai1);
        printf("Masukkan nilai Dasar Dasar Pemrograman: ");
        scanf("%f", &nilai2);
        printf("Masukkan nilai PTI: ");
        scanf("%f", &nilai3);

        float jumlah = nilai1 + nilai2 + nilai3;
        float hasil = jumlah / 3;
        printf("Rata-rata yang diperoleh adalah %f\n", hasil);

        if (hasil >= 90 && hasil <=100) {
            printf("Predikat yang diperoleh adalah A\n");
        } else if (hasil >= 80 && hasil < 90) {
            printf("Predikat yang diperoleh adalah B\n");
        } else if (hasil >= 70 && hasil < 80) {
            printf("Predikat yang diperoleh adalah C\n");
        } else if (hasil >= 60 && hasil < 70) {
            printf("Predikat yang diperoleh adalah D\n");
        } else if (hasil < 60) {
            printf("Predikat yang diperoleh adalah E\n");
        } else {
            printf("Nilai tidak valid");
        }
        printf("Apakah ingin mengulangi lagi? (y/n): ");
        scanf("%s", &ulang);
    } while (ulang != 'n');
}

void belahKetupat() {
    char ulang;
    do {
        int kolom;

        system("cls");
        printf("===============\n");
        printf(" BELAH KETUPAT \n");
        printf("===============\n");
        printf("Masukan jumlah kolom = ");
        scanf ("%d",&kolom);
        for (int i = 1; i <= kolom; i++){
            for (int j = 1; j <= kolom - i; j++){
                printf (" ");
            }
            for (int k = 1; k <= i; k++){
                printf (" *");
            }
            printf("\n");
        }
        for (int i = 1; i < kolom; i++) {
            for (int j = 1; j <= i; j++){
                printf (" ");
            }
            for (int k = 1; k <= kolom - i ; k++){
                printf (" *");
            }
            printf("\n");
        }
        printf("Apakah ingin mengulangi lagi? (y/n): ");
        scanf("%s", &ulang);
    } while (ulang != 'n');
}

void main() {
    int pilihan;
    char ulang;

        do {
        system("cls");
        printf("===============\n");
        printf("   MAIN MENU   \n");
        printf("===============\n");
        printf("1. Menu Nilai\n");
        printf("2. Perulangan\n");
        printf("3. Exit\n");
        printf("Masukkan pilihan: ");
        scanf("%i", &pilihan);

        switch (pilihan) {
        case 1:
            rataRata();
            break;
        case 2:
            belahKetupat();
            break;
        }
    } while (pilihan != 3);
}
