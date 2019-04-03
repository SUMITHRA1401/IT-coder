#include <stdio.h>

void main()
{
    int num,m,n;
    printf("enter the numbers(intervals):");
    scanf("%d%d",&m,&n);
    printf("Odd Numbers:\n", m, n);
    for (num = m; num <= n; num++)
    {
        if(num % 2 == 1)
        printf ("%d ", num);
    }
    getch();

}
