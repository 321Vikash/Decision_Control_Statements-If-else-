/* programmer : Vikash Kumar Thakur
   Topic      :WAP to cheack whether a given number is divisible by 3 and divisible by 2.
   IDE        :VS Code
*/
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number :");
    scanf("%d", &a);
    if (a % 3 == 0 && a % 2 == 0)
    {
        printf("Divisible by 3 and 2");
    }
    else
    {
        printf("Not divisible");
    }
}