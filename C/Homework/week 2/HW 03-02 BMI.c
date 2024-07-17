#include <stdio.h>

int main(){
    float height;
    float weight;
    scanf("%f",&height);
    scanf(" %f",&weight);
    height /= 100;
    double bmi = weight / (height * height);
    printf("%f", bmi);
    return 0;

}