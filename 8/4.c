#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    char name[n][110];
    char temp[110];

    for(int i = 0; i < n; i++) {
        gets(name[i]);
    }

    for (int j = 0; j < n; j++) {
        for (int k = 0; k < n - j - 1; k++) {
            if((strlen(name[k]) < strlen(name[k + 1]))) {
                strcpy(temp, name[k]);
                strcpy(name[k], name[k + 1]);
                strcpy(name[k + 1], temp);
            }
        }
    }

    printf("%s", name[0]);
    return 0;
}
