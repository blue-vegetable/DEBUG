#include <stdio.h>

int main()
{
    int matrix_a[10][10];
    int matrix_b[10][10];
    int matrix_c[10][10];
    int m;
    int n;
    int i, j, k;

    scanf("%d %d", &m, &n);

    for (i = 0; i < m; i++) {
        for (k = 0; k < n; k++) {
            scanf("%d", &matrix_a[i][k]);
        }
    }
    for (k = 0; k < n; k++) {
        for (i = 0; i < m; i++) {
            scanf("%d", &matrix_b[k][i]);
        }
    }
    for (i = 0; i < m; i++) {
        for(j = 0; j < m; j++) {
            int t = 0;
            for (k = 0; k < n; k++) {
                t += (matrix_a[i][k] * matrix_b[k][j]);
            }
            matrix_c[i][j] = t;
        }
    }
    for (i = 0; i < m; i++) {
        for (k = 0; k < m; k++) {
            printf("%d", matrix_c[i][k]);
            if (k < m - 1 ) {
                printf(" ");
            }
            if (k == m - 1) {
                printf("\n");
            }
        }
    }

    return 0;
}
