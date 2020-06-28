#include <stdio.h>
#include <string.h>

int main() 
{
    char before[100];
    scanf("%s", before);
    char calculate[100][100];
    int i = 0;
    int count = 0;
    int result = 0;
    int rflag = 0, wflag = 0, xflag = 0;

    while(scanf("%s", calculate[i]) != EOF) {
        count++;
        i++;
    }

    for(i = 0; i < 3; i++) {
        if(before[i] == 'r') {
            rflag = 1;
        }

        if(before[i] == 'w') {
            wflag = 1;
        }

        if(before[i] == 'x') {
            xflag = 1;
        }
    }
    for(i = 0; i < count; i++) {
        if(calculate[i][0] == '+') {
            if(calculate[i][1] == 'r') {
                rflag = 1;
            }
            if(calculate[i][1] == 'w') {
                wflag = 1;
            }
            if(calculate[i][1] == 'x') {
                xflag = 1;
            }
        } else if(calculate[i][0] == '-') {
            if(calculate[i][1] == 'r') {
                rflag = 0;
            }
            if(calculate[i][1] == 'w') {
                wflag = 0;
            }
            if(calculate[i][1] == 'x') {
                xflag = 0;
            }
        }
    }
    
    result = rflag * 4 + wflag * 2 + xflag;
    printf("%d", result);
    return 0;
}

