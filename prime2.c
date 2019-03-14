#include <stdio.h>
int main()
{
    int low,high,i,flag;
    printf("Enter two integer: ");
    scanf("%d%d",&low,&high);

    printf("Prime numbers between %d and %d are:");

    while (low<high)
    {
        flag=0;
        for(i=2;i<=low/2;++i)
        {
            if(low%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("\n %d",low);
            ++low;
    }

    return 0;
}
