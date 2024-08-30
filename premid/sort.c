#include <stdio.h>

int main() {
    int n;
    int hasDecimal = 0;

    scanf("%d", &n);

    float numbers[n];

    printf("%d", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &numbers[i]);
        if ((int)numbers[i] != numbers[i]) {
            hasDecimal = 1;
        }
    }

    // Bubble sort
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (numbers[j] > numbers[j+1]) {
                // Swap the numbers
                float temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
        }
    }

    // Output the sorted numbers
    for (int i = 0; i < n; i++) {
        if (hasDecimal) {
            printf("%.2f ", numbers[i]);
        } else {
            printf("%.0f ", numbers[i]);
        }
    }

    return 0;
}
