#include <stdio.h>

int main()
{
    int n;
    printf("enter the year:");
    scanf("%d",&n);
    if(n%4==0)
        printf("it is leap year");
    else
        printf("it is not a leap year");
    
}
