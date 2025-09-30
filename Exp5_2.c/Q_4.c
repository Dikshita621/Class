/*WAP that reads two matrices A (m x n) and B (p x q) and computes the product A 
and B. Read matrix A and matrix B in row major order respectively. Print both the 
input matrices and resultant matrix with suitable headings and output should be in 
matrix format only. Program must check the compatibility of orders of the matrices 
for multiplication. Report appropriate message in case of incompatibility. */

#include <stdio.h>

int main() {
    int m, n, p, q;

    // Read dimensions of matrix A
    printf("Enter number of rows and columns of matrix A (m n): ");
    scanf("%d %d", &m, &n);

    int A[m][n];

    // Read matrix A in row-major order
    printf("Enter elements of matrix A (row-wise):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Read dimensions of matrix B
    printf("Enter number of rows and columns of matrix B (p q): ");
    scanf("%d %d", &p, &q);

    int B[p][q];

    // Read matrix B in row-major order
    printf("Enter elements of matrix B (row-wise):\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Check for compatibility: number of columns of A must equal number of rows of B
    if (n != p) {
        printf("Matrix multiplication not possible. Incompatible dimensions.\n");
        return 0;
    }

    int product[m][q];

    // Initialize product matrix to 0
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            product[i][j] = 0;
        }
    }

    // Compute product A * B
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                product[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print matrix A
    printf("Matrix A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    // Print matrix B
    printf("Matrix B:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    // Print product matrix
    printf("Product of Matrix A and Matrix B:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
