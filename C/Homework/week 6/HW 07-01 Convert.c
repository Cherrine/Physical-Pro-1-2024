#include <stdio.h>
#include <string.h>
#include <ctype.h> // for tolower

void to_Lowercase(char* str){
    while (*str){
        *str = tolower(*str);
        str++;
    }
}

void switchChar(char* str){
    while (*str){
        if (islower(*str)){
            *str = toupper(*str);
        }else{
            *str = tolower(*str);
        }
        str++;
    }
}

int main() {
    char str1[102];
    char str2[102];

    scanf("%[^\n]%*c", str1);
    scanf("%[^\n]%*c", str2);
    
    switchChar(str1);
    switchChar(str2);

    printf("*** Results ***\n%s\n%s\n***************\n", str1, str2);
    
    to_Lowercase(str1);
    to_Lowercase(str2);

    if (strcmp(str1, str2) == 0) {
        printf("Both strings are the same.\n");
    } else {
        printf("Both strings are not the same.\n");
    }

    return 0;
}
