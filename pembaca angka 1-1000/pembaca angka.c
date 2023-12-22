#include <stdio.h>

int main()
{

    int x;
    int s, b, p, r, rb;


    char kata[][15] = {{""}, {"Satu"}, {"Dua"}, {"Tiga"}, {"Empat"},{"Lima"},
       {"Enam"}, {"Tujuh"}, {"Delapan"}, {"Sembilan"}};


    printf("Masukkan angka : ");
    scanf("%d", &x);


    s = x % 10;
    x = x / 10;
    b = s;

    p = x % 10;
    x = x / 10;

    r = x % 10;
    x = x / 10;

    rb = x % 10;
    x = x / 10;


    printf("\nTerbilang : ");


    if(rb != 0 && rb != 1){
        printf("%s Ribu ", kata[rb]);
    }else if(rb == 1){printf("Seribu ");}


    if(r != 0 && r != 1){
        printf("%s Ratus ", kata[r]);
    }else if(r == 1){printf("Seratus ");}


    if(b != 0 && (b != 1 && p == 1)){
        printf("%s Belas ", kata[b]);
    }else if(b == 1 && p == 1){printf("Sebelas ");}


    if(p != 0 && p != 1){
        printf("%s Puluh ", kata[p]);
    }else if(s == 0 && p ==1){printf("Sepuluh ");}


    if(p != 1){
        printf("%s", kata[s]);
    }

    if((s == 0 && (p == 0 && r == 0)) && rb == 0){
        printf("Nol");
    }

    printf("\n\n");
    system("PAUSE");
    return 0;
}
