#include <stdio.h>
int main()
{
    int n,i,flag=0;
    printf("Enter the integer:");
    scanf("%d",&n);
    for(i=2;i<=n/2;++i)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }

    if (n==1) 
    {
      printf("1 is neither a prime nor a composite number");
    }
    else 
    {
        if (flag==0)
          printf("%d yes prime number");
        else
          printf("%d no not prime number");
    }
    
    return 0;
}
