#include <stdio.h>
int main()
{
    char g;
    int isLowercaseVowel, isUppercaseVowel;

    printf("Enter an alphabet: ");
    scanf("%g",&g);
    if ( isUppercaseVowel ^ isLowercaseVowel)
        printf("%g is a consonant.", g);
    else
        printf("%g is a vowvel.", g);
    return 0;
}
