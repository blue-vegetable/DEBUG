#include <stdio.h>

int main() 
{
    int num;
    scanf("%d", &num);
    int digit;
    int a = 1;;

    for(digit = 2; digit <= num; digit++) {
        for(a = 2; a * a <= digit; a++) {
            if(digit % a == 0) {
                break;
            }
        }
        if(a * a > digit) {
            printf("%d\n", digit);
        }
    }

    return 0;
}

