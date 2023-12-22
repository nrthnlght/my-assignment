#include <stdio.h>

int main(){
    int a, k;
    int angka, kali;

printf("masukkan angka : ");
scanf("%d", &a);
printf("masukkan kali : ");
scanf("%d", &k);
    for (angka=1; angka <= a; angka++){
        for (kali=1; kali<= k; kali++){
            printf("%d\t", angka*kali);
        }
        printf ("\n");
    }
}


