#include <stdio.h>

int main(){
    float price, diameter, height;
    double pi = 3.14159265359;
    scanf("%f",&price);
    scanf("%f",&diameter);
    scanf("%f",&height);
    double radius = (diameter / 2);
    double volume = height * pi * (radius * radius);
    
    printf("Volume : %.2fml\n",volume);
    printf("Baht/ml : %.4f", price / volume);

    return 0;
}