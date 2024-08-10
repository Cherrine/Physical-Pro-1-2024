#include <stdio.h>

int main() {
    int M[] = {2, 20, 8, 10, 4, 6, 16, 18};
    int N[] = {1, 3, 9, 7, 11, 15, 19};
    int num = 0;
    int sizeM = sizeof(M) / sizeof(M[0]); // Size of array M
    int sizeN = sizeof(N) / sizeof(N[0]); // Size of array N
    int found = 0; // Flag to indicate if num is found

    do {
        scanf("%d", &num);
    } while (num < 1 || num > 20);

    // Loop through array M
    for (int i = 0; i < sizeM; i++) {
        if (M[i] == num) {
            found = 1;
            printf("%d is in M at index [%d]\n", num, i);
            break;
        }
    }

    // If num is not found in array M, loop through array N
    if (!found) {
        for (int i = 0; i < sizeN; i++) {
            if (N[i] == num) {
                found = 1;
                printf("%d is in N at index [%d]\n", num, i);
                break;
            }
        }
    }

    // If num was not found in either array
    if (!found) {
        printf("%d is not in neither M nor N\n", num);
    }

    return 0;
}
