#include <stdio.h>
#include <string.h>
int main() {
    int n;
    int i=0, j=0;
    scanf("%d\n", &n);
    char names[n][101];
    char temp[101];
    
    while (scanf("%c", &names[i][j]) != EOF) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < 101; j++) {
                scanf("%c", &names[i][j]);
                if (names[i][j] == '\n') {
                    names[i][j] = '\0';
                    break;
                }            
            }
        }
    }
    
    int max=strlen(names[0]);
    int number=0;
    for(i=1;i<n;i++){
        if(max<strlen(names[i])){
            max=strlen(names[i]);
            number=i;
        }
    }
    
    printf("%s", names[number]);   
    return 0;
}
