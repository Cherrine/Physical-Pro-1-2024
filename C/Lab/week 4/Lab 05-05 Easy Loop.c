#include "stdio.h"

int main(){
    int number, i = 0;
    scanf("%d", &number);
    if(number > 0){
        while(number >= i){
            printf("%d ", number);
            number--;
        }
    }
    else if(number < 0){
        while(number <= i){
            printf("%d ", number);
            number++;
        }
    }
    else{
        printf("0");
    }

    return 0;
    
}