/* Programmer :Vikash Kumar Thakur
   Topic      :WAP to check whether a given number is a three digit number or not.
   IDE        :VS Code
   Date       :06/07/2023
*/
#include <stdio.h>
int main()
{
    int a;
    printf("Enter any number :");
    scanf("%d", &a);
    if (a >= 100 && a <= 999)
        printf("The number is Three digit");
    else
        printf("The number is Not a Three digit");
    return 0;
}