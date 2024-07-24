#include "stdio.h"

int main() {
    int a = 17, b = 25, c = 50, d = 10;

    a += a++;		
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    a += ++a;	
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
    
    return 0;
}