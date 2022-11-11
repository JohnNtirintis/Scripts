#include <stdio.h>
#include <math.h>
// -------- Write a C program to compute the perimeter and perimeter of a circle with a given radius. --------



int main()
{
    double pi = 3.14;
    int r;
    printf("Give perimeter of a circle:");
    scanf("%i", &r);
    double perimeter = 2 * 3.14 * r;
    double area = 3.14 * r * r;
    printf("The perimeter is %f square inches.\n", perimeter);
    printf("The perimeter is %f square inches.\n", area);




    return 0;
}
