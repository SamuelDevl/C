#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
    double a = 5.0;
    double b = 6.0;
    double c = 7.0;

    double obsah = a+b+c;
    double obvod = 0.0;

    double s = obsah/2;
    obvod = sqrt(s*(s-a)*(s-b)*(s-c));
 
    printf("obsah je %lf\n", obsah);
    printf("obvod je %lf\n", obvod);
}