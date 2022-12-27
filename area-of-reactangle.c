#include <stdio.h>

double reacangle_area(double l,double w)
{
    return l*w;
}
int main() {
    double length, width, area;

    printf("Enter the length :");
    scanf("%lf", &length);
    printf("Enter the width :");
    scanf("%lf", &width);

    area = reacangle_area(length,width);

    printf("Area of the rectangle is: %.2lf units\n", area);
}


