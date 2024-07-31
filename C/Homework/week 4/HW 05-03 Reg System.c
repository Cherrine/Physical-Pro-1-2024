#include "stdio.h"

int main(){
    int n = 0, firstCount = 0, secondCount = 0, thirdCount = 0, forthCount = 0;
    float avgAge = 0, avgHeight = 0, avgWeight = 0;
    int age, height, weight;
    while (n < 50){       
        scanf("%d %d %d", &age, &height, &weight);
        if(age >= 20 && height >= 160){
            firstCount += 1;
        }if(age < 20 && (height <= 180 || weight >= 60)){
            secondCount += 1;
        }if(age >= 30 && (weight >= 40 && weight <= 80)){
            thirdCount += 1;
        }if(age < 40 && (weight < 85 || height <= 200)){
            forthCount += 1;
        }
        avgAge += age;
        avgHeight += height;
        avgWeight += weight;
        n++;
    }
    printf("Age >= 20 and Height >= 160: %d\n", firstCount);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", secondCount);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", thirdCount);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", forthCount);
    printf("Average Age: %d\n", (int)avgAge / 50);
    printf("Average Height: %.2f\n", avgHeight / 50);
    printf("Average Weight: %.2f", avgWeight / 50);

    return 0;

}