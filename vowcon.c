#include <stdio.h>

int main()
{
    char ch;
    int isLowercaseVowel, isUppercaseVowel;

    printf("Enter an alphabet: ");
    scanf("%c",&ch);
    isLowercaseVowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    isUppercaseVowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    if (isLowercaseVowel || isUppercaseVowel)
        printf("%c is a vowel.", ch);
    else
        printf("%c is a consonant.", ch);
    return 0;
}
