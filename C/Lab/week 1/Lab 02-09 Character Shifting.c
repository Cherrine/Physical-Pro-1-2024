#include <stdio.h>
int main(){
    char firstChar, secondChar, thirdChar, fourthChar, fifthChar;

    scanf(" %c",&firstChar);
    scanf(" %c",&secondChar);
    scanf(" %c",&thirdChar);
    scanf(" %c",&fourthChar);
    scanf(" %c",&fifthChar);

    printf("%c\n", firstChar + 1);
    printf("%c\n", secondChar);
    printf("%c\n", thirdChar + 1);
    printf("%c\n", fourthChar);
    printf("%c\n", fifthChar + 1);

    return 0;
}