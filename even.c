#include <stdio.h>
int main()
{
    int i,n;
    printf("Print even numbers till: ");
    scanf("%d",&n);

    printf("even numbers from 1 to %d are: \n",n);
    i=1;
    while(i<=n)
    {
        if(i%2==0)
        {
            printf("\n %d", i);
        }

        i++;
    }

    return 0;
}
