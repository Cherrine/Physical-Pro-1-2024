#include <stdio.h>
#include <string.h>

char* strrev(char* str){
    int len = strlen(str);
    char temp;
    for (int i = 0; i < len/2; i++){
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    return str;
}

int main()
{
    char str[100];
    scanf("%99[^\n]", str);
    printf("%s", strrev(str));

    return 0;
}