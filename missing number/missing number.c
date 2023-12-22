#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int angka;

    printf ("masukkan angka 1-6: ");
    scanf ("%d", &angka);

    for (int i = 1; i <= angka; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%d", j);
    }
    for (int i = 1; i <= 2; i++){
        printf("*");
    }
    for (int i = 1 ; i >= 1; i--){
        for (int j = 6; j >= 1; j--)
            if (j <= i){
                printf("%d", (angka + 3));
            }
                else (" ");

    }
    printf("\n");
  }
  return 0;
}

//sejadinya ya kak

