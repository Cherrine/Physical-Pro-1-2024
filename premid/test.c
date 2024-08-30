#include <stdio.h>

int main() {
    float ma[3][3], mb[3][3], mc[3][3];
    int i, j, k;

    // Input for the first matrix (ma)
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%f", &ma[i][j]);
        }
    }

    // Print the first matrix (ma) - Optional
    /*
    printf("Matrix A:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%.2f ", ma[i][j]);
        }
        printf("\n");
    }
    */

    // Input for the second matrix (mb)
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%f", &mb[i][j]);
        }
    }

    // Print the second matrix (mb) - Optional
    /*
    printf("Matrix B:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%.2f ", mb[i][j]);
        }
        printf("\n");
    }
    */

    // Initialize the result matrix (mc) to 0
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            mc[i][j] = 0.0;
        }
    }

    // Perform matrix multiplication: mc = ma * mb
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                mc[i][j] += ma[i][k] * mb[k][j];
            }
        }
    }

    // Print the resulting matrix (mc)
    printf("A x B\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%.2f ", mc[i][j]);
        }
        printf("\n");
    }

    return 0;
}
