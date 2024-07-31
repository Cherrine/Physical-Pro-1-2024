#include "stdio.h"

int main(){
    int numberM, numberN, i;
    scanf("%d %d",&numberM, &numberN);
    if (numberM > numberN) {
        for (i = numberM; i >= numberN; i--) {
            printf("%d ", i);
        }
    }else{
        for (i = numberM; i <= numberN; i++) {
            printf("%d ", i);
        }
    }

    return 0;
}