/* programmer : Vikash Kumar Thakur
   Topic      :WAP which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.
   IDE        :VS Code
*/
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter length of sides of a triangle :");
    scanf("%d%d%d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
        printf("Valid Triangle");
    else
        printf("Not a valid triangle");
    return 0;
}