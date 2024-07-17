#include <stdio.h>

int main() {
    char number[6];
    scanf("%5s",number);
    
    printf("%.1s%-80s",number,"");
    printf("%.2s%-79s",number,"");
    printf("%.3s%-78s",number,"");
    printf("%.4s%-77s",number,"");
    printf("%.5s%-76s",number,"");
    return 0;
}