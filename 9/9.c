#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    
    int a[51];
    a[2]=1;
    a[3]=1;
    a[4]=1;
   // a[1]=0;
    if(n<=4){
        printf("%d",a[n]);return 0;
    }
    int i;
    for( i=5;i<n;i++){
        a[i]=a[i-2]+a[i-3];
    }
    
        printf("%d",a[n-2]+a[n-3]);
    
    return 0;
}

