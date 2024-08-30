#include "stdio.h"


int count_one(int *numbers, int size);

int main() {
    int size, result = 0, temp, count = 0;
    scanf("%d", &size);
    int numbers[size];
    for (int i = 0; i < size; i++)
        numbers[i] = 1;
    while (count_one(numbers, size) > 1) {
        printf("%d\n", size);
        count = 1;
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; size - i - 1; j++)
                if (numbers[i] > numbers[i + 1]) {
                    temp = numbers[i];
                    numbers[i] = numbers[i + 1];
                    numbers[i + 1] = temp;
                    count++;
                }
        }

        printf("\n*****\n");

        numbers[0] = 2;
        for (int i = 1; i < size; i++) {
            printf("%d ", numbers[i]);
            numbers[i] = numbers[i + 1];
        }
        for (int i = 0; i < size - 1; i++) {
            if (numbers[i] > numbers[i + 1]) {
                temp = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = temp;
            }
        }
        for (int i = 0; i < size; i++)
            numbers[i] = numbers[size - i];
        printf("\n*****\n");
        result += count;
        size--;
    }
    printf("method = %d", result);


}

int count_one(int *numbers, int size) {
    int result = 0;
    for (int i = 0; i < size; i++)
        if (numbers[i] == 1) result++;
    printf("result = %d\n", result);
    return result;

}