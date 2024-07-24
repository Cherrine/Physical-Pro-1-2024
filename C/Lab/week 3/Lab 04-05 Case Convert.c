#include <stdio.h>

char toUpper(char c){
    if (c >= 'a' && c <= 'z') {
        return c - 32;
        }
    return c;
}

char toLower(char c){
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
        }
    return c;
}

int main(){
    char text;
    scanf("%c", &text);
    if (text >= 'a' && text <= 'z'){
        printf("%c", toUpper(text));
    }else if(text >= 'A' && text <= 'Z'){
        printf("%c", toLower(text));
    }else{
        printf("error");
    }
    
    return 0;

}