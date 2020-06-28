#include<stdio.h>

int main() 
{
    int n, i, j;
    scanf("%d", &n);

    if(n == 1) {
        return 0;
    }

    if(n == 2) {
        printf("2\n");
    } else {
        printf("2\n");
        for(i = 3; i <= n; i = i + 1) {
            for(j = 2; j * j <= i; j = j + 1) {
                if(i % j == 0) {
                    break;
                }
            }
            if (j * j > i) {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}


