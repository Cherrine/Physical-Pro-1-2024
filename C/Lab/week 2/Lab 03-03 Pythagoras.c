#include <stdio.h>
#include <math.h>

int main(){

    double x, y;
    scanf("%lf",&x);
    scanf("%lf",&y);
    printf("%.2f", sqrt(pow (x, 2) + pow (y, 2)));
    return 0;
}