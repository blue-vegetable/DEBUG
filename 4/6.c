#include <stdio.h>

int main()
{
    int n = 10;
    int numbers[10];
    int i, j;
    int tmpt;

    // ¶ÁÈë¸ø¶¨µÄÊý×Ö
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - 1; j++) {
            if (numbers[i] > numbers[j]) {
                tmpt = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] =   tmpt;
            }
        }
    }
    for (int m = 0; m < 10; m++) {
        if (m != 9) {
            printf("%d ", numbers[m]);
        } else {
            printf("%d", numbers[m]);
        }

    }

    return 0;
}
