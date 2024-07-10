#include <stdio.h>

int main(){
    char name1[30], surname1[30], name2[30], surname2[30] , name3[30], surname3[30];
    
    scanf(" %s",&name1);
    scanf(" %s",&surname1);
    scanf(" %s %s",&name2, &surname2);
    scanf(" %s %s",&name3, &surname3);

    printf("Person 1: %s %s\n", name1, surname1);
    printf("Person 2: %s %s\n", name2, surname2);
    printf("Person 3: %s %s\n", name3, surname3);
    
    return 0;
}