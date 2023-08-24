/* programmer : Vikash Kumar Thakur
   Topic      :WAP to cheack whether a given number is positive,negative or zero.
   IDE        :VS Code
*/
#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number :");
    scanf("%d", &x);
    if (x > 0)
        printf("positive");
    else if (x < 0)
        printf("Negative");
    else
        printf("Zero");
    return 0;
}