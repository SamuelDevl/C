#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
    double p = 6000000.0;
    double rocniUrokProcenta = 4.0;
    double pocetLet = 30;

    double r = rocniUrokProcenta/12/100;
    double n = pocetLet*12;

    double m = 0.0;

    m = ((p*r)*(pow(1+r,n)))/(pow(1+r,n)-1);

    for(int i = 1; i < n; i++){
        double urok = r*p;
        double umor = m - urok;
        p -= umor;
        printf("%4d %8.2lf %8.2lf\n", i, urok, umor);
    }

    printf("splatka je %lf\n", m); // 35973.03 
}