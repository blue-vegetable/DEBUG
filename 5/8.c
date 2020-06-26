#include <stdio.h>
#include <string.h>
int main() {
    char string[10][21];
    char str[21];
    int i, j;
    for(i = 0; i < 10; i++){
            scanf("%s", string[i]);
    }
    for (i = 0; i < 9; i++){
        for (j = i+1; j < 10; j++){
            if (strcmp(string[i], string[j]) > 0){
                strcpy(str,string[i]);
                strcpy(string[i],string[j]);
                strcpy(string[j],str);
            }
        }
    }
    for (i = 0; i < 10; i++){
                printf ("%s\n", string[i]);
    }
    return 0;
}
