#include <stdio.h>
int main(){
    char text;
    scanf("%c", &text);
    if (text >= 'a' && text <= 'z'){
        printf("lowercase");
    }else if(text >= 'A' && text <= 'Z'){
        printf("uppercase");
    }else if(text >= '0' && text <= '9'){
        printf("number");
    }else{
        printf("error");
    }
    
    return 0;

}