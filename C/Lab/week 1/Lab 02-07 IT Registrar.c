#include <stdio.h>

int main(){
    char name[30];
    char surname[30];
    int studentID;
    int dd, mm, yy;
    float gpa;

    scanf(" %s", &name);
    scanf(" %s", &surname);
    scanf(" %d", &studentID);
    scanf(" %d/%d/%d", &dd, &mm, &yy);
    scanf(" %f", &gpa);

    printf("Fullname: %s %s\n", name, surname);
    printf("ID: %d\n", studentID);
    printf("DOB: %02d-%02d-%d\n", dd, mm, yy);
    printf("GPA: %.2f", gpa);

    return 0;
}