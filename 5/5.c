#include <stdio.h>
#include <string.h>
#define Num 10
#define NameMax 21

void swap (char **str1, char **str2);

int main() 
{
    char name[Num][21];
    int i;
    int j;
    
    for (i = 0; i < Num; i++) {
        scanf("%s", name[i]);    
    }
    for (j = 0; j < Num; j++) {
        for (i = 0; i < Num -1; i ++) {
            if(strcmp(name[i], name[i + 1]) > 0){
                swap(&name[i], &name[i + 1]);    
            }
        }
    }
    for (i = 0; i < Num; i++) {
        printf("%s", name[i]);   
		if (i != Num-1) {
            printf("\n");
        }  
    }
    return 0;
}

void swap(char **str1,char **str2) 
{
    char *temp;
    temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}
