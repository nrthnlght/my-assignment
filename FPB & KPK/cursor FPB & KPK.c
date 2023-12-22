#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

void gotoxy(int x, int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void load(){
    int x,waktu;
    x=5;
    system("cls");

    printf("LOADING\n");
    sleep(1);
    for(waktu=0;waktu<=0;waktu++)
        {
            for(x=0;x<3;x++)
            {
                printf(".");
                sleep(1);
            }
            printf("\33[2K\r");
        }
        system("cls");

        return(0);
}

void main(){
    system("cls");

    gotoxy(48,8);
    printf("_____________________");
    gotoxy(56,10);
    printf("MENU");
    gotoxy(48,11);
    printf("______________________");
    gotoxy(48,17);
    printf("______________________");

    int position = 1;
    int keyPressed = 0;
    int maxoption = 3;

    while(keyPressed != 13){
        gotoxy(48,13);
        arrowhere(1,position); printf(" 1.FPB ");
        gotoxy(48,14);
        arrowhere(2,position); printf(" 2.KPK ");
        gotoxy(48,15);
        arrowhere(3,position); printf(" 3.Exit");
        keyPressed = getch();
        if(keyPressed == 80 && position !=3){
            position++;
        }else if(keyPressed == 72 && position !=1){
            position--;
        }else{
            position = position;
        }
    }
    printf(" Select Option ,%d \n",position);
    int x = position;
    int a;
    int b;

    switch(x){
        case 1 :
            system("cls");
            //load();

            int a[2];
            int i;
            gotoxy(48,0);
            printf("Welcome to Menu");
            gotoxy(40,1);
            printf("Faktor Persekutuan Terbasar(FPB)");
            gotoxy(0,5);
            printf("Masukkan Angka Pertama (I): ");
            scanf("%d",&a[0]);
            gotoxy(0,6);
            printf("Masukkan Angka kedua (II) : ");
            scanf("%d",&a[1]);
            int pembagi[2][10], jml[2]={0,0};
            int bil[2];
            bil[0]= a[0], bil[1] = a[1];
            for(int i = 0; i < 2; i++){
                for (int j = 0; j < 10; j++){
                    if (a[i] %2 == 0){
                        a[i] /= 2; pembagi[i][jml[i]] = 2; jml[i]++;
                    }
                    else if (a[i] %3 == 0){
                        a[i] /= 3; pembagi[i][jml[i]] = 3; jml[i]++;
                    }
                    else if (a[i] %5 == 0){
                        a[i] /= 5; pembagi[i][jml[i]]= 5; jml[i]++;
                    }
                    else if (a[i] %7 == 0){
                        a[i] /= 7; pembagi[i][jml[i]] = 7; jml[i]++;
                    }
                    else if (a[i] %11 == 0){
                        a[i] /= 11; pembagi[i][jml[i]] = 11; jml[i]++;
                    }
                }
            }
            for(int j = 0; j < 2; j++){
                printf("Bilangan %d : %d = ",j+1, bil[j]);
                for (int i = 0; i < jml[j]; i++){
                    if (i == jml[j]-1){
                        printf("%d", pembagi[j][i]);
                    }else{
                        printf("%d X ",pembagi[j][i]);
                    }
                }
                printf("\n");
              }
            int temp;
            if (bil[0] > bil[1]){
                temp = bil[0];
                bil[0] = bil[1];
                bil[1] = temp ;
            }while (bil[0] > 0){
                temp = bil[1] % bil[0];
                bil[1] = bil[0];
                bil[0] = temp;
            }
            printf("FPB = %d\n",bil[1]);
            gotoxy(0,10);
            system("pause");
            main();
            break;

        case 2 :
            system("cls");
            load();

            int r,u,f,g,h;
            gotoxy(50,0);
            printf("WELCOME TO MENU");
            gotoxy(42,1);
            printf("Kelipatan Persekutuan Terkecil(KPK)");
            gotoxy(0,6);
            printf("Masukkan bilangan bulat pertama : ");
            scanf("%d",&r);
            printf("Masukkan bilangan bulat kedua   : ");
            scanf("%d",&u);
            int bil1[10], bil2[10];
            printf("%d : ", r);
            bil1[0] = r;
            for(int i = 0; i < 10; i++){
                if (i > 0){
                    bil1[i]=bil1[i-1]+r;
                }
                printf("%d ", bil1[i]);
            }
            printf("\n%d : ", u);
            bil2[0] = u;
            for(int i = 0; i < 10; i++){
                if(i > 0){
                    bil2[i] = bil2[i-1] + u;
                }
                printf("%d ", bil2[i]);
            }
            printf("\n"); int n = 0;
            int kpk[10];
            for(int i = 0; i < 10; i++){
                for(int j = 0; j < 10; j++){
                    if(bil1[i] == bil2[j]){
                        kpk[n] = bil1[i]; n++;
                    }
                }
            }
            printf("Kelipatan Persekutuan : ");
            for (int i = 0; i < n; i++ ){
                printf(" %d", kpk[i]);
            }
            printf("\n");
            printf("KPK : %d\n", kpk[0]);
            system("pause");
            main();
            break;

        case 3:
            system("cls");
            exit(0);
    }
}

void arrowhere (int realposition,int arrowposition){
    if(realposition == arrowposition){
        printf("-->");
    }else{
        printf("   ");
    }
}
