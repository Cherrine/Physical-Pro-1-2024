#include <stdio.h>

int main(){

    float price, total;
    double percent;
    scanf("%f", &price);
    scanf("%lf", &percent);
    scanf("%f", &total);
    double percentage = percent * 0.01;
    double result = (price * total) * (percentage);
    printf("%.2f", (price * total) - result);

    return 0;
    
}