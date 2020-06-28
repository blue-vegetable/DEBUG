#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int  i = 0;
    int  chmod = 0;
    int  chmod_r = 0;
    int  chmod_w = 0;
    int  chmod_x = 0;
    char origin[4];
    char changes[3];

    //check original status
    scanf("%s", origin);

    for (i = 0; i < 3; i++) {
        if (origin[i] == 'r') {
            chmod_r++;
        } else if (origin[i] == 'w') {
            chmod_w++;
        } else if (origin[i] == 'x') {
            chmod_x++;
        }
    }

    while (scanf("%s", changes) != EOF) {
        if (changes[0] == '+') {
            if (changes[1] == 'r') {
                chmod_r = 1;
            } else if (changes[1] == 'w') {
                chmod_w = 1;
            } else if (changes[1] == 'x') {
                chmod_x = 1;
            }
        } else {
            if (changes[1] == 'r') {
                chmod_r--;
            } else if (changes[1] == 'w') {
                chmod_w--;
            } else if (changes[1] == 'x') {
                chmod_x--;
            }
        }
    }

    if (chmod_r > 0) {
        chmod += 4;
    }
    if (chmod_w > 0) {
        chmod += 2;
    }
    if (chmod_x > 0) {
        chmod += 1;
    }
    printf("%d", chmod);

    return 0;
}
