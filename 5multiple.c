#include <stdio.h>

int main()
{
    int i,n;
    printf("enter the integer:");
    scanf("%d",&n);
    for(i=1;i<=5;++i)
    {
        printf("%d * %d= %d \n ",i, n, n*i);
    }
    return 0;
}