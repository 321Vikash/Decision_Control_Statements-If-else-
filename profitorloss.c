/* programmer : Vikash Kumar Thakur
   Topic      :WAP which  takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
   IDE        :VS Code
*/
#include <stdio.h>
int main()
{
    double cp, sp, pp, lp;
    printf("Enter the cost price :");
    scanf("%lf", &cp);
    printf("Enter the selling price :");
    scanf("%lf", &sp);
    if (sp - cp >= 0)
    {
        pp = (sp - cp) / cp * 100;
        printf("The profit percentage is :%lf ", pp);
    }
    else
    {
        lp = (cp - sp) / cp * 100;
        printf("The loss Percentage is :%lf ", lp);
    }
    return 0;
}