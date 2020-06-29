#include <stdio.h>
#include <math.h>

int main() 
{
    int a, b, c; 
    scanf("%d", &b);
    
    if (b == 1) {
        return 0;
    } else if (b == 2) {
        printf("2");
    } else if (b > 2) {
        printf("2\n3\n");
        for (a = 5; a <= b; a += 2) {
            for (c = 3; c * c <= a; c += 2) {
                if (a % c == 0) {
                    break;
                }
            }
            if (c * c > a) {
                printf("%d\n", a);
            }
        }
    }
    
    return 0;
}



