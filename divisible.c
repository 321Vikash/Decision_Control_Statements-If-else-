/* Programmer :Vikash Kumar Thakur
   Topic      :WAP to check whether a given number is divisible by 5 or not
   IDE        :VS Code
   Date       :06/07/2023
*/
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number :");
    scanf("%d", &a);
    if (a % 5 == 0)

        printf("Divisible by 5");

    else
        printf("Not Divisible by 5");
    return 0;
}