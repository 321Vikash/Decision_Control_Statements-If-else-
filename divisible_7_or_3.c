/* programmer : Vikash Kumar Thakur
   Topic      :WAP to cheack whether a given number is divisible by 7 or divisible by 3.
   IDE        :VS Code
*/
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number :");
    scanf("%d", &a);
    if (a % 7 == 0 || a % 3 == 0)
        printf("Divisible by 7 or 3");
    else
        printf("Not divisible ");
}