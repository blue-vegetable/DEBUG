#include <stdio.h>
#include <string.h>

int main()
{
    char str[500], fs[32];
    int  arr[32], bits[32];
    int i, j = 0;
    memset(arr, 0, sizeof(arr));
    memset(fs, '\0', sizeof(fs));
    scanf("%s", str);

    while (str[j] != '\0') {
        if (str[j] == '\n') {
            break;
        }
        arr[(j + 1) % 32] = arr[(j + 1) % 32] + (int)(str[j]);
        j++;
    }
    for (i = 0; i < 32; i++) {
        bits[i] = arr[31 - i] ^ (arr[i] << 1);
        int x = (bits[i] % 85) + 34;
        fs[i] = (char) x;
    }
    for (int i = 0; i < 32; i++) {
        printf("%c", fs[i]);
    }

    return 0;
}
