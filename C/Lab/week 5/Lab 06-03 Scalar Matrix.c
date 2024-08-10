#include <stdio.h>
#include <stdbool.h>

int main() {
    float matrix[3][3];

    for (int i = 0; i < 3; i++) {
        scanf("%f %f %f", &matrix[i][0], &matrix[i][1], &matrix[i][2]);
    }

    float diag = matrix[0][0]; 
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                // Check diagonal elements
                if (matrix[i][j] != diag) {
                    printf("This is not a scalar matrix\n");
                    return 0;
                }
            } else {
                // Check off-diagonal elements
                if (matrix[i][j] != 0) {
                    printf("This is not a scalar matrix\n");
                    return 0;
                }
            }
        }
    }

    printf("This is a scalar matrix\n");
    return 0;
}
