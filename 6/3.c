#include <stdio.h>
#include <string.h>

int main() 
{
    int i = 0;
    int counter = 0;
    char temp[10][3];
    char name[3];
    int xflag = 0;
    int rflag = 0;
    int wflag = 0;

    while (scanf("%s", name) != EOF) {
        strcpy(temp[i], name);
        i++;
    }

    for (int j = 0; j < 3; j++) {
        if((temp[0][j] == 'w')) {
            wflag = 1;
        } else if((temp[0][j] == 'r')) {
            rflag = 1;
        } else if((temp[0][j] == 'x')) {
            xflag = 1;
        }
    }
    for(int a = 1; a < i; a++) {
        if ((temp[a][0] == '+' && temp[a][1] == 'r')) {
            rflag = 1;
        } else if((temp[a][0] == '+' && temp[a][1] == 'w')) {
            wflag = 1;
        } else if((temp[a][0] == '+' && temp[a][1] == 'x')) {
            xflag = 1;
        } else if((temp[a][0] == '-' && temp[a][1] == 'r')) {
            rflag = 0;
        } else if((temp[a][0] == '-' && temp[a][1] == 'w')) {
            wflag = 0;
        } else if((temp[a][0] == '-' && temp[a][1] == 'x')) {
            xflag = 0;
        }
    }
    
    counter = rflag * 4 + wflag * 2 + xflag;
    printf("%d", counter);
    return 0;
}

