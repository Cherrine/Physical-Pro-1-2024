#include "stdio.h"

int main(){
    int times, result;
    float range, fieldrange;
    scanf("%d", &times);
    scanf("%f", &range);
    for (int count = 0; count < times; count++){
        scanf("%f", &fieldrange);
        if(range > fieldrange){
            result += 1;
        }else{
        }
    }
    printf("%d", result);
}