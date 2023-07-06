/* Programmer :Vikash Kumar Thakur
   Topic      :WAP to check whether a given number is positive or negative
   IDE        :VS Code
   Date       :06/07/2023
*/
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number :");
    scanf("%d", &a);
    if (a > 0)

        printf("Positive");

    else
        printf("Negative");
    return 0;
}