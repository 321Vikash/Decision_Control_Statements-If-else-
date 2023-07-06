/* Progrmmer :Vikash Kumar Thakur
   Topic     :WAP to find the greatest among three given number.
   IDE       :VS Code
   Date      :06/07/2023
*/
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the first nubmer :");
    scanf("%d", &a);
    printf("Enter second number:");
    scanf("%d", &b);
    printf("Enter the third number :");
    scanf("%d", &c);
    if (a >= b && a >= c)
        printf("%d", a);
    if (b >= a && b >= c)
        printf("%d", b);
    if (c >= a && c >= b)
        printf("%d", c);
    return 0;
}