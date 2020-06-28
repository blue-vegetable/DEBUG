#include <stdio.h>

int main() 
{
    int matrix[100][100];
    int m;
    int n;
    scanf("%d%d", &m, &n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int i,j;
    int start = 0, column = n, row = m;
    int count = 0;
    
    while(1) {
        if (n == 1) {
            for ( i = 0; i < m; i++) {
                if (i == m - 1){
                    printf("%d", matrix[i][0]);
                    return 0;
                } else
                printf("%d ", matrix[i][0]);
            }
        } else  if (m == 1) {
            for ( j = 0; j < n; j++) {
                if (j == n - 1){
                    printf("%d", matrix[0][j]);
                    return 0;
                } else
                printf("%d ", matrix[0][j]);
            }
        } else {
    		for ( j = start; j < column+start; j++) {
        		printf("%d", matrix[start][j]);
                count++;
                if(count==m*n)
                    return 0;
                printf(" ");
    		}
    		for ( i = start + 1; i < row+start; i++) {
       		 	printf("%d", matrix[i][column-1+start]);
       		 	count++;
       		 	if(count==m*n)
                    return 0;
                printf(" ");
    		}
    		for ( j = column-2+start; j >= start; j--) {
       		 	printf("%d", matrix[row-1+start][j]);
       		 	count++;
       		 	if(count==m*n)
                    return 0;
                printf(" ");
   			}
    		for (i = row-2+start; i > start; i--) {
        		printf("%d", matrix[i][start]);
        		count++;
       		 	if(count==m*n)
                    return 0;
                printf(" ");
   			}
        }
    	start++;
    	column-=2;
    	row-=2;
    }


    return 0;
}

