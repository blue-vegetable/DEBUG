#include <stdio.h>
#include <string.h>

void f(char []);

int main()
{
    char string[500];

    scanf("%s", string);
    f(string);
    return 0;
}

void f(char string[])
{
    int arr[32], bits[32];
    char result[33] = {'\0'};
    int i, j = 0;

    for (i = 0; i < 32; i++)
        arr[i] = 0;
    while (string[j] != '\0') {
        if (string[j] == '\n') {
            break;
        }
        arr[(j + 1) % 32] = arr[(j + 1) % 32] + (int)(string[j]);
        j++;
    }

    for (int i = 0; i < 32; i++) {
        bits[i] = (arr[31 - i]) ^ (arr[i] << 1);
        int b = (bits[i] % 85) + 34;
        result[i] = (char)b;
    }

    for (j = 0; j < 32; j++)
        printf("%c", result[j]);
}
