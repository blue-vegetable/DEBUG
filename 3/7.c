#include <stdio.h>

int main()
{
    int matrix[100][100];
    int m;
    int n;
    int i;
    int j;
    int startX;
    int startY;
    int endX;
    int endY;

    startX = 0;
    startY = 0;

    //input m, n
    scanf("%d %d", &m, &n);

    //input a m*n matrix
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    //judge loop conditions
    while (startX * 2 < m && startY * 2 < n) {
        endX = m - 1 - startX;
        endY = n - 1 - startY;
        // output a row, towards right
        if (startY <= endY) {
            for (j = startY; j <= endY; j++) {
                printf("%d", matrix[startX][j]);
                if (j < endY || startX < endX) {
                    printf(" ");
                }
            }
        }
        // output a col, towards down
        if (startX < endX) {
            for (i = startX + 1; i <= endX; i++) {
                printf("%d", matrix[i][endY]);
                if (i < endX || startY < endY) {
                    printf(" ");
                }
            }
        }
        // output a row, towards left
        if (endX > startX && startY <= endY) {
            for (j = endY - 1; j >= startY; j--) {
                printf("%d", matrix[endX][j]);
                if (j > startY || startX < endX - 1) {
                    printf(" ");
                }
            }
        }
        // ouput a col, towards up
        if (endY > startY && startX <= endX) {
            for (i = endX - 1; i >= startX + 1; i--) {
                printf("%d", matrix[i][startX]);
                if (i > startX + 1 || startY < endY - 1) {
                    printf(" ");
                }
            }
        }
        startX++;
        startY++;
    }

    return 0;
}
