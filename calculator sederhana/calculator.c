#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
     int a,b,c;
     printf("calculator sederhana");
     printf("\n1. penambahan");
     printf("\n2. pengurangan");
     printf("\n3. perkalian");
     printf("\n4. pembagian");
     printf("\nmasukkan pilihan :");
     scanf("%i", &a);
     switch(a){
         case 1:
             printf("\nangka 1 : ");
             scanf("%i", &b);
             printf("\nangka 2 : ");
             scanf("%i", &c);
             printf("\nhasil penambahan %i + %i : %i", b, c,(b+c));
             break;
        case 2:
             printf("\nangka 1 : ");
             scanf("%i", &b);
             printf("\nangka 2 : ");
             scanf("%i", &c);
             printf("\nhasil pengurangan %i - %i : %i", b, c,(b-c));
             break;
        case 3:
             printf("\nangka 1 : ");
             scanf("%i", &b);
             printf("\nangka 2 : ");
             scanf("%i", &c);
             printf("\nhasil perkalian %i * %i : %i", b, c,(b*c));
             break;
        case 4:
             printf("\nangka 1 : ");
             scanf("%i", &b);
             printf("\nangka 2 : ");
             scanf("%i", &c);
             printf("\nhasil pembagian %i / %i : %i", b, c,(b/c));
             break;
             default: printf("\npilihan tidak tersedia!\n");
     }
}
