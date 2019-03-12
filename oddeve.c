#include <stdio.h>

int main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    if(a%2==0)
        printf("%d the number is even");
    else
        printf("%d the number is odd");
        return 0;
}
