#include <stdio.h>

int main() {
    int n = 10;
    int m;
    int numbers[10];
    int i;
    int temp;
    
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    for(i = 0; i <= 9; i++){
        for(m = 0; m < 9-i; m++){
            if(numbers[m] < numbers[m+1]){
               temp=numbers[m];
                numbers[m]=numbers[m+1];
                numbers[m+1]=temp;
            }
        }
    }
    
    for(i = 0; i <= 9; i++){
        printf("%d", numbers[i]);
        if(i != 9){
            printf(" ");
        }
    }

    return 0;
}
