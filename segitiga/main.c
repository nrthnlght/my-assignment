#include<stdio.h>

#include <stdio.h>
 int main(){
  int a,b,n;

  printf ("Masukkan Tinggi Segitiga: ");scanf("%d",&n);

  for (a=0;a<=n;a++)
  {
   for (b=a;b<=n;b++){
    printf(" ");
   }
   for (b=1;b<=a;b++){
    printf("*");
   }
   for (b=1;b<a;b++){
    printf("*");
   }
   printf("\n");
  }
 }
