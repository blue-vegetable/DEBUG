#include <stdio.h>
int main()
{
    char in[500];
    char out[33];
    int arr[32];
    int bits[32];
    int i;
    int j=0;
    
    scanf("%s", in);
   // k = strlen(in);
    
    // 1
    for (i = 0; i < 32; i++)
    {
        arr[i] = 0;
    }
    while (in[j] != '\0') {
        if (in[j] == '\n') {
            break;
        }
        arr[(j + 1) % 32] = arr[(j + 1) % 32] + (int)(in[j]);
        j++;
    }

    for (int i = 0; i < 32; i++) {
        bits[i] = (arr[31 - i]) ^ (arr[i] << 1);
        int b = (bits[i] % 85) + 34;
        out[i] = (char)b;
    }

    for (int i = 0; i < 32; i++) {
        printf("%c", out[i]);
    }
    return 0;
}
