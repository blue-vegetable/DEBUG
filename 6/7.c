#include <stdio.h>

void add(char);
void delete(char);
int rwx = 0;

int main()
{
    //initiation
    char temp;

    while (1) {
        scanf("%c", &temp);
        if (temp == 'r') {
            rwx += 4;
        } else if (temp == 'w') {
            rwx += 2;
        } else if (temp == 'x') {
            rwx += 1;
        } else {
            break;
        }
    }

    //modification
    while (scanf("%c", &temp) != EOF) {
        if (temp == '+') {
            scanf("%c", &temp);
            add(temp);
        } else {
            scanf("%c", &temp);
            delete(temp);
        }
        scanf("%c", &temp);         //get '\n'
    }
    //output
    printf("%d", rwx);
    return 0;
}

void add(char input)
{
    if (input == 'r' && rwx / 4 != 1) {
        rwx ^= (1 << 2);
    } else if (input == 'w' && rwx / 2 % 2 != 1) {
        rwx ^= (1 << 1);
    } else if (input == 'x' && rwx % 2 != 1) {
        rwx ^= (1 << 0);
    }
}

void delete(char input)
{
    if (input == 'r' && rwx / 4 == 1) {
        rwx ^= (1 << 2);
    } else if (input == 'w' && rwx / 2 % 2 == 1) {
        rwx ^= (1 << 1);
    } else if (input == 'x' && rwx % 2 == 1) {
        rwx ^= (1 << 0);
    }
}
