#include <stdio.h>

int main()
{
    int base,exponent;
    long long result = 1;
    printf("enter the base value:");
    scanf("%d",&base);
    printf("enter the exponent value:");
    scanf("%d",&exponent);
    while(exponent !=0)
    {
        result *=base;
        --exponent;
    }
    printf("%lld",result);
    return 0;
}
