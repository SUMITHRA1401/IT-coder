#include<stdio.h>
int getint()
{
  int x;
  char c;
  printf("\nEnter an integer (say -1 or 26 or so ): ");
  while( scanf("%d",&x) != 1 )
  {
    c=getchar();

    printf("You have entered ");
    putchar(c);
    printf(" in the input which is not an integer");

    while ( getchar() != '\n' )
    printf("\nEnter an integer (say -1 or 26 or so ): ");

  }

return x;
}

