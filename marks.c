/* programmer : Vikash Kumar Thakur
   Topic      :WAP to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33.Now display whether the candidate passed the examination of failed.
   IDE        :VS Code
*/
#include <stdio.h>
int main()
{
    int phy, che, math, eng, com;
    printf("Enter the marks of physics :");
    scanf("%d", &phy);
    printf("Enter the marks of chemistry :");
    scanf("%d", &che);
    printf("Enter the marks of math :");
    scanf("%d", &math);
    printf("Enter the marks of English :");
    scanf("%d", &eng);
    printf("Enter the marks of Computer :");
    scanf("%d", &com);
    if (phy >= 33 && che >= 33 && math >= 33 && eng >= 33 && com >= 33)
        printf("The candidate PASS");
    else
        printf("The candidate FAIL");
}
