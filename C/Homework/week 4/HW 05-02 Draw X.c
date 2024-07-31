#include "stdio.h"

int main(){
    int number, i, row;
    scanf("%d", &number);
    for(i = 0; i < number; i++){
        for (row = 0; row < number; row++){
            if (row == i || row == number - i - 1){
                printf("-");
            }else if (row < i || i > number - i - 1){
                printf("#");
            }else{
                printf("#");
            }
        }
        printf("\n");
    }
    return 0;
}