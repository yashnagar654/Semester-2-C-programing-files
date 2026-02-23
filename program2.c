#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10], sub[10][10];
    int product[10][10], transpose[10][10];
    int r1, c1, r2, c2;
    int i, j, k;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

       printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    if(r1 == r2 && c1 == c2) {
        printf("\nSum of matrices:\n");
        for(i = 0; i < r1; i++) {
            for(j = 0; j < c1; j++) {
                sum[i][j] = a[i][j] + b[i][j];
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }

        printf("\nSubtraction of matrices:\n");
        for(i = 0; i < r1; i++) {
            for(j = 0; j < c1; j++) {
                sub[i][j] = a[i][j] - b[i][j];
                printf("%d ", sub[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("\nAddition and Subtraction not possible (Order must be same).\n");
    }

    if(c1 == r2) {
        printf("\nProduct of matrices:\n");
        for(i = 0; i < r1; i++) {
            for(j = 0; j < c2; j++) {
                product[i][j] = 0;
                for(k = 0; k < c1; k++) {
                    product[i][j] += a[i][k] * b[k][j];
                }
                printf("%d ", product[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("\nMultiplication not possible (Columns of first must equal rows of second).\n");
    }

    printf("\nTranspose of first matrix:\n");
    for(i = 0; i < c1; i++) {
        for(j = 0; j < r1; j++) {
            transpose[i][j] = a[j][i];
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}