#include <stdio.h>
#include <string.h>
int main() {
    int n;
    scanf("%d\n", &n);
    int i,j;
    char a[100][100]={'0'};
    char temp[100] = {'0'};

    for(i = 0; i < n; i++){
        for(j = 0; j < 100; j++){
            if(scanf("%c",&a[i][j]) == EOF){
                break;
            }
            if(a[i][j] == '\n' ){
 		a[i][j]='\0';
                break;
            }
        }
    }
    
    for(i = 0; i < n - 1; i++){
        for(j = 0;j<n-1-i;j++){
		if(strlen(a[j]) < strlen(a[j+1])) {
                   strcpy(temp, a[j]);
                   strcpy(a[j], a[j + 1]);
                   strcpy(a[j + 1], temp);
            }
        }
    }
    printf("%s",a[0]);

    return 0;
}
