#include <stdio.h>

int main()
{
    int i,n;
    unsigned long factorial=1;
    printf("enter the number:");
    scanf("%d",&n);
    if(n<0)
    printf("error occur");
    else
    {
        for(i=1;i<=n;++i)
        {
            factorial*=i;
        }
        printf("the factorial of %d=%llu");
    }
}
