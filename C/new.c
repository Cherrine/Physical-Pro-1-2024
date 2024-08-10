#include <stdio.h>

int main()
{
    int age = 0;
    int height = 0;
    int weight = 0;
    int group1 = 0;
    int group2 = 0;
    int group3 = 0;
    int group4 = 0;
    float totalAge = 0;
    float totalHeight = 0;
    float totalWeight = 0;
    for(int i = 0; i < 50; i++)
    {
        scanf("%d %d %d", &age, &height, &weight);
        if (age >= 20 && height >= 160)
        {
            group1 += 1;
        }
        if (age < 20 && (height < 180 || weight >= 60))
        {
            group2 += 1;
        }
        if (age >= 30 && (weight >= 40 && weight <= 80))
        {
            group3 += 1;
        }
        if (age < 40 && (weight < 85 || height <= 200))
        {
            group4 += 1;
        }
        totalAge += age;
        totalHeight += height;
        totalWeight += weight;
    }
    printf("Age >= 20 and Height >= 160: %d\n", group1);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", group2);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", group3);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", group4);
    printf("Average Age: %d\n", (int)totalAge / 50);
    printf("Average Height: %.2f\n", totalHeight / 50);
    printf("Average Weight: %.2f", totalWeight / 50);
    return 0;
};