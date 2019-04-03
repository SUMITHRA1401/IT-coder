#include <stdio.h>
int main()
{
    int num,onum,rem,result=0;
    printf("Enter a three digit integer: ");
    scanf("%d", &num);

    onum = num;
    while (onum != 0)
    {
        rem = onum%10;
        result += rem*rem*rem;
        onum /= 10;
    }

    if(result == num)
        printf("%d is an Armstrong number.",num);
    else
        printf("%d is not an Armstrong number.",num);

    return 0;
}
