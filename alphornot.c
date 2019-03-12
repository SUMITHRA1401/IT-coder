#include <stdio.h>

int main()
{
    char ch;
    printf("enter the character:");
    scanf("%c",&ch);
    if((ch >= 'a' && ch <='z') || (ch >= 'A' && ch <='Z'))
        printf("\n it is a character");
    else
        printf("\n it is not a character");
}
