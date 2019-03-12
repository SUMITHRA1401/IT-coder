#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a value:");
    scanf("%c",&ch);

    if( (ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
        printf("%c it is an alphabet",ch);
    else
        printf("%c it is not an alphabet",ch);

}
