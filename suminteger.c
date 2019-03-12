#include <stdio.h>

int main()
{
    long double n;
    int c=0;
    printf("Enter an integer:");
    scanf("%ldd", &n);
    while(n != 0)
    {
        n /= 10;
        ++c;
    }
    printf("Number of digits: %d", c);
}
