#include <stdio.h>

int main()
{
    double number;

    printf("Enter a number: ");
    scanf("%f", &number);

    if (number <= 0)
    {
        if (number <0)
            printf("You entered positive number");
        else
            printf("You entered a zero");
    }
    else
        printf("You entered a negative number");
}
