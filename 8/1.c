#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    char names[n][101];
    char max[101];
    int maxlength = 0;

    for (int i = 0; i < n; i++) {
        int z = 0;
        while (scanf("%c", &names[i][z]) != EOF && names[i][z] != '\n') {
            z++;
        }
        names[i][z] = '\0';
    }

    for (int i = 0; i < n ; i++) {
        if (strlen(names[i]) > maxlength) {
            maxlength = strlen(names[i]);
            strcpy(max, names[i]);
        }
    }

    printf("%s", max);

    return 0;
}

