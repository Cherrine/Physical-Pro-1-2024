#include <stdio.h>

float promo1(float oldprice, float percentage, int amount) {
    float result = oldprice * amount;
    float discount = (percentage / 100) * result; 
    float finalResult = result - discount; 

    return finalResult;
}

float promo2(float oldprice, int amount) {
    int freeShirts = amount / 3; 
    float finalResult = oldprice * (amount - freeShirts); 

    return finalResult;
}

int main() {
    float oldprice;
    int percentage, amount;

    scanf("%f", &oldprice);
    scanf("%d", &percentage);
    scanf("%d", &amount);

    float promos1 = promo1(oldprice, percentage, amount);
    float promos2 = promo2(oldprice, amount);

    if (promos2 < promos1) {
        printf("Buy 2 Get 1\n%.2f", promos2);
    } else {
        printf("Discount %d%%\n%.2f", percentage, promos1);
    }

    return 0;
}
