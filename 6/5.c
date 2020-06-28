#include <stdio.h>
#include <string.h>

int main() 
{
    char input[4];
    int count = 0;
    int i;
    scanf("%s", input);
    char operation[3];
    int rflag = 0, wflag = 0, xflag = 0;

    if (input[0] == 'r' && input[1] == 'w' && input[2] == 'x') {
        rflag = 1;
        xflag = 1;
        rflag = 1;
    } else if (input[0] == 'r' && input[1] == 'w') {
        rflag = 1;
        wflag = 1;
    } else if (input[0] == 'r' && input[1] == 'x') {
        rflag = 1;
        xflag = 1;
    } else if (input[0] == 'w' && input[1] == 'x') {
        wflag = 1;
        xflag = 1;
    } else if (input[0] == 'r') {
        rflag = 1;
    } else if (input[0] == 'w') {
        wflag = 1;
    } else {
        xflag = 1;
    }

    while (scanf("%s", operation) != EOF) {
        if (operation[0] == '+' && operation[1] == 'r') {
            rflag = 1;
        } else if (operation[0] == '+' && operation[1] == 'w') {
            wflag = 1;
        } else if (operation[0] == '+' && operation[1] == 'x') {
            xflag = 1;
        } else if (operation[0] == '-' && operation[1] == 'r') {
            rflag = 0;
        } else if (operation[0] == '-' && operation[1] == 'w') {
            wflag = 0;
        } else {
            xflag = 0;
        }
    }
    
    count = rflag * 4 + wflag * 2 + xflag;
    printf("%d", count);

    return 0;
}

