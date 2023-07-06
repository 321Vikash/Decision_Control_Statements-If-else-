/* Programmer :Vikash Kumar Thakur
   Topic      :WAP to print  greater between two number.
   IDE        :VS Code
   Date       :06/07/2023
*/
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the first Number:");
    scanf("%d", &a);
    printf("\n Enter The Second Number: ");
    scanf("%d", &b);
    if (a > b)
        printf("A is greater than B: %d", a);
    else
        printf("B is greater than A: %d", b);
    return 0;
}