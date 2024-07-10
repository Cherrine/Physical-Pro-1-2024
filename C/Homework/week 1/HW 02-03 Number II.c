#include <stdio.h>
int main(){
    int num;

    scanf(" %d", &num);
    printf("%-80d", num / 10000);
    printf("%3d%-79s", num / 1000, "");
    printf("%3d%-78s", num / 100, "");
    printf("%4d%-77s", num / 10, "");
    printf("%5d%-76s", num, "");

    return 0;
}