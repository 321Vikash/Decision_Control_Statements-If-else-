/* Programmer :Vikash Kumar Thakur
   Topic      : WAP to check whether a given year is a leap year or not.
   IDE        :VS Code
   Date       :06/07/2023
*/
#include <stdio.h>
int main()
{
    int y;
    printf("Enter the year :");
    scanf("%d", &y);
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
        printf("%d is a leap year ", y);
    else
        printf("%d is not a leap year",y);
    return 0;
}