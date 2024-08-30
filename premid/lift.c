#include <stdio.h>

int main() {
    int total, count, age, pass = 0;
    float totalweight, currentWeight, accumulatedWeight = 0;

    scanf("%d", &total);
    scanf("%f", &totalweight);

    for (count = 0; count < total; count++) {
        scanf("%d", &age);
        if (age >= 12) {
            pass += 1;
        }
        scanf("%f", &currentWeight);
        accumulatedWeight += currentWeight;
    }

    if ((pass >= 1) && (accumulatedWeight <= totalweight)) {
        printf("Safe\n");
    } else {
        printf("Not Safe\n");
    }

    return 0;
}
