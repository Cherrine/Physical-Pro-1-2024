#include <stdio.h>

int main(){
    char string1[30];
    char string2[30];
    char string3[30];
    char string4[30];

    scanf(" %s",&string1);
    scanf(" %s",&string2);
    scanf(" %s",&string3);
    scanf(" %s",&string4);

    printf("String 1: %.3s\n", string1);
    printf("String 2: %.4s\n", string2);
    printf("String 3: %.5s\n", string3);
    printf("String 4: %.6s\n", string4);

    return 0;
    
}