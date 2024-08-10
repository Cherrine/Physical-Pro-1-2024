#include <stdio.h>
#include <string.h>    

int main(){
    char str[200];
    scanf("%199[^\n]", str);

    if(strcmp(str, strrev(str)) == 0){
        printf("It is Palindrome.\n");
    }else{
        printf("It is not Palindrome.\n");
    }

    printf("\n %s", strrev(str));
    return 0;
}