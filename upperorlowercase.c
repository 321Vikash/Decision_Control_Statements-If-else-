/* programmer : Vikash Kumar Thakur
   Topic      : WAP to check whether a given alphabet is in uppercase or lowercase.
   IDE        :VS Code
*/
#include <stdio.h>
int main()
{
    char x;
    printf("Enter any alphabet :");
    scanf("%c", &x);
    if (x >= 'a' && x <= 'z')
        printf("Lowercase alphabet");
    else if (x >= 'A' && x <= 'Z')
        printf("Uppercase alphabet");
    else
        printf("Not an alphabet");
    return 0;
}