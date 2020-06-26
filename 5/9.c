#include <stdio.h>
#include <string.h>
int main() {
    int i,j;
    char name[10][20]={0},m[21];
    for(i = 0; i < 10; i++){
        scanf("%s",name[i]);
    }
    
    for(i = 0; i < 9; i++){
       for(j=i+1;j<10;j++)
         {
             if(strcmp(name[i],name[j])>0)
             {
        strcpy(m,name[i]);
        strcpy(name[i],name[j]);
        strcpy(name[j],m);
             }
         }
    }

    for(i = 0; i < 10; i++){
        printf("%s\n",name[i]);
    }
    
    return 0;
}
