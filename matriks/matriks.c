#include <stdio.h>

#include <stdio.h>

int main()
{
  int i,j,plhn,choice,jmlh,kali,hasil;
  int  A[2][5], B[2][5];

      printf("pilih menu: \n");

  printf("\n1. Tambah Matriks\n");

  printf("2. Kali Matriks\n");

  printf("3. EXIT\n");

  printf("Masukan Pilihan: ");
  scanf("%d",&plhn);
  printf("\n");


    for(i=1;i<2;i++){
    for(j=1;j<5;j++){
      printf("Masukan A[%d][%d]: ",i,j);
      scanf("%d", &A);
    }
    printf("\n");
  }
  for(i=1;i<2;i++){
    for(j=1;j<5;j++){
      printf("Masukan B[%d][%d]: ",i,j);
      scanf("%d", &B);
    }
  }

   switch (choice) {
            case '1':
                printf("Hasil penjumlahan kedua matriks:%d", A[i][j]+B[i][j]);
                break;

            case '2':
               printf("Hasil perkalian kedua matriks:%d", A[i][j]*B[i][j]);
                break;

            case '3':
                printf("Keluar Program.\n");
                break;
            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
                break;
        }


return 0;
}
