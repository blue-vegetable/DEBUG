#include <stdio.h>
#include<string.h>

const int maxn = 10010;

int main()
{
    int i, j = 0;
    int arr[32] = {0};
    int bits[32];
    char str[maxn], rstr[maxn];
    scanf("%s", str);

    while (str[j] != '\0') {
        if (str[j] == '\n') {
            break;
        }
        arr[(j + 1) % 32] = arr[(j + 1) % 32] + (int)(str[j]);
        j++;
    }

    for (int i = 0; i < 32; i++) {
        bits[i] = (arr[31 - i]) ^ (arr[i] << 1);
        int b = (bits[i] % 85) + 34;
        rstr[i] = (char)b;
    }
    for(i = 0; i < 32; i++) {
        printf("%c", rstr[i]);
    }

    return 0;
}
