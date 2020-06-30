#include <stdio.h>
#include <string.h>

int main() 
{
    char arr[33];
    char str[501]={'\0'};
    int bits[33];
    char result[33];
    char input;
    int j = 0;

    for(int i = 0; i < 32; i++) {
        arr[i] = 0;
    }
    while (scanf("%c", &input) != EOF) {
        if(j >= 500) {
            break;
        }
        str[j] = (int)(input);
        j++;
    }
    for (int i = 0; i < strlen(str); i++) {
        arr[(i + 1) % 32] += (int)(str[i]);
    }
    for (int i = 0; i < 32; i++) {
        bits[i] = arr[31 - i] ^ (arr[i] << 1);
        int b = (bits[i] % 85) + 34;
        result[i] = (char)b;
    }
    for (int i = 0; i < 32; i++) {
        printf("%c", result[i]);
    }

    return 0;
}
