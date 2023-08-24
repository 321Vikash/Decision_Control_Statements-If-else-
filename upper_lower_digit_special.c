/* programmer : Vikash Kumar Thakur
   Topic      :WAP to cheack whether a given character is an alphabet(uppercase),an alphabet(lowercase),a digit or a special character.
   IDE        :VS Code
*/
#include <stdio.h>
int main()
{
    char x;
    printf("Enter any key:");
    scanf("%c", &x);
    if (x >= 'a' && x <= 'z')
        printf("Lowercase Alphabet");
    else if (x >= 'A' && x <= 'Z')
        printf("Uppercase Alphabet");
    else if (x >= '0' && x <= '9')
        printf("Digit");
    else
        printf("Special Character");
    return 0;
}