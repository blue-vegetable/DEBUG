#include <stdio.h>

int main() {
    int matrix[100][100];
    int m;
    int n;
    
    scanf("%d%d", &m, &n);
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int index = 0;
    int up = 0,down = m - 1,left = 0,right = n - 1;
    int i = 0,j = 0;
    if ( index == 0){
	i = up;
	printf("%d",matrix[i][j]);
	for (j = 1; j <= right; j++){ 
                    printf(" %d",matrix[i][j]);
				}
			up++;
			index = 1;
			}
    while(up <= down && left <= right)
{
		 if (index == 1)//向下走
{
		j = right;
		for (i = up; i <= down; i++)
{
		printf(" %d",matrix[i][j]);
}
				right--;
				index = 2;
			}
			else if (index == 2)//向右走
			{
				i = down;
				for (j = right; j >= left; j--)
				{
					 printf(" %d",matrix[i][j]);
				}
				down--;
				index = 3;
			}
			else if (index == 3)//向上走
			{
				j = left;
				for (i = down; i >= up; i--)
				{
					printf(" %d",matrix[i][j]);
				}
				left++;
				index = 0;
			}
        else if (index == 0)//向右走
			{
				i = up;
                
				for (j = left; j <= right; j++)
				{ 
                    printf(" %d",matrix[i][j]);
				}
				up++;
				index = 1;
			}
		}
             


   return 0;
}
