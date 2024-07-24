#include <stdio.h>
int main(){
    float num;
    scanf("%f", &num);
    if (num >= 80 && num <= 100){
        printf("A");
    }else if (num >= 70 && num < 80){
        printf("B");
    }else if (num >= 60 && num < 70){
        printf("C");
    }else if (num >= 50 && num < 60){
        printf("D");
    }else if (num >= 0 && num < 50){
        printf("F");
    }else{
        printf("Out of Range");
    }

    return 0;
}