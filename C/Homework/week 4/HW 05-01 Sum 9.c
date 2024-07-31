#include "stdio.h"

int main(){
    int number, sum = 0;
    scanf("%d", &number);
    while(number != -9){
        sum += number;
        scanf("%d", &number);
    }
    printf("%d", sum);

    return 0;
}