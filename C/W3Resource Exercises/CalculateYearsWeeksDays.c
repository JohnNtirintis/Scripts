#include <stdio.h>

// -------- Write a C program to convert specified days into years, weeks and days. --------



int main()
{
    int days;
    printf("Enter number of days: ");
    scanf("%i", &days);
    int years = days / 365;
    days = days - (years * 365);
    int weeks = days / 7;
    days = days - ( weeks  * 7);

    printf("Total number of years: \t%i\n", years);
    printf("Total number of weeks: \t%i\n", weeks);
    printf("Total number of days: \t%i\n", days);





    return 0;
}
