#include <stdio.h>

int main(){
    int number;
    for(int i=1; i<=4; i++){
        if(i%2 == 0){
            number = 1;
        }else{
            number = 2;
        }
        for(int j=0; j<4-i; j++){
            printf("\t");
        }
        for(int k=1; k<=(i*2)-1; k++){
            printf("%d",number);
            number = number + 2;
            printf("\t");
        }
        printf("\n");
    }
}
