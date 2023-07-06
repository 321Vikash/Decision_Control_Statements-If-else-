/* Programmer :Vikash Kumar Thakur
   Topic      :WAP to check whether a given nubmer is an even nubmer or an odd nubmer.
   IDE        :VS Code
   Date       :06/07/2023
*/
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    if (a % 2 == 0)
        printf("Even");
    else
        printf("Odd");
    return 0;
}