//Priya parks her car for H hours. The parking charge is Rs. X for the first hour and Rs. Y for each additional hour.
//Find the total parking charge she should pay.
#include <stdio.h>
int main()
{
    int x, y, h;
    scanf("%d %d %d", &x, &y, &h);
    int total;
    if (h == 1)
        total = x;
    else
        total = x + (h - 1) * y;
    printf("%d", total);
    return 0;
}
