#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    int i, j;
    scanf("%d\n", &n);
    char string[n][110];

    for (i = 0; i < n; i++) {
        for (j = 0; j < 110; j++) {
            scanf("%c", &string[i][j]);
            if (string[i][j] == '\n') {
                string[i][j] = '\0';
                break;
            }
        }
    }

    char str[200];
    for (i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if (strlen(string[j]) < strlen(string[j + 1])) {
                strcpy(str, string[j]);
                strcpy(string[j], string[j + 1]);
                strcpy(string[j + 1], str);
            }
        }
    }

    printf("%s", string[0]);
    return 0;
}
