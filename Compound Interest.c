#include <stdio.h>
#include <math.h>
int main()
{
    double P, R, T, CI;
    scanf("%lf %lf %lf", &P, &R, &T);

    CI = P * (pow(1 + R / 100, T) - 1);

    printf("%.2lf", CI);
    return 0;
}
