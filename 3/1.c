#include <stdio.h>
#include<math.h>

int main() 
{
    int a[100][100];
    int m;
    int n;
    int i, j;
    int x, y;    //the position of the box
    scanf("%d%d", &m, &n);
    int count = m * n;
    int visited[100][100] = {0};

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("%d", a[0][0]);
    x = 0;
    y = 0;
    int flag = 0;
    int num = 1;         //record the times of output
    
    while(num < count) {
        if(x == 0 + flag) {
            while(y < n - 1 - flag) {
                y++;
                printf(" %d", a[x][y]);
                num++;
                if(num == count) {
                    return 0;
                }
            }
        }
        if(y == n - flag - 1 ) {
            while(x < m - flag - 1) {
                x++;
                printf(" %d", a[x][y]);
                num++;
                if(num == count) {
                    return 0;
                }
            }
        }
        if(x == m - 1 - flag) {
            while(y > flag) {
                y--;
                printf(" %d", a[x][y]);
                num++;
                if(num == count) {
                    return 0;
                }
            }
        }
        if(y == flag) {
            while(x > flag + 1) {
                x--;
                printf(" %d", a[x][y]);
                num++;
                if(num == count) {
                    return 0;
                }
            }
        }
        flag++;
    }
    
    return 0;
}

