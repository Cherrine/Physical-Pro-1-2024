#include "stdio.h"
#include "math.h"

double perimeter(double side, double height, double width);
double area(double width, double height);

double perimeter (double side, double height, double width){
    return side + height + width;
}

double area (double width, double height){
    return 0.5 * width * height;
}

int main(){
    double side, height, width, peri, ar;
    scanf("%lf", &height);
    scanf("%lf", &width);
    side = sqrt((height * height) + (width * width));
    peri = perimeter(side, height, width);
    ar = area(width, height);

    printf("Perimeter: %.2lf\n", peri);
    printf("Area: %.2lf\n", ar);
}

