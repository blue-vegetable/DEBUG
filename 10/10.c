#include <stdio.h>
int main()
{
    int N;
    int i,j;
    scanf("%d",&N);
    for(i=2;i<=N;i++)
    {   
        for(j=2;j<i;j++)
        {
           if(i%j==0)
               break;
        } 
        if(i==j)
            printf("%d\n",i);
    }      
    return 0;
}
