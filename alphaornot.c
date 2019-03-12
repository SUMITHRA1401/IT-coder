#include <stdio.h>

int main()
{
    char a;
    printf("enter the chatacter:");
    scanf("%c",&a);
    if((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
    printf("\n it is alphabet");
    else
    printf("\n it is not alphabet");
}
