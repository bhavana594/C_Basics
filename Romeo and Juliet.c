//Romeo has X five-rupee coins and Y ten-rupee coins.
//He goes to a shop to buy chocolates for Juliet, where each chocolate costs Z rupees.
//Find the maximum number of chocolates that Romeo can buy for Juliet.
#include <stdio.h>

int main()
{
    int x, y, z;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    int choco = ((5 * x) + (10 * y)) / z;
    printf("%d", choco);

    return 0;
}
