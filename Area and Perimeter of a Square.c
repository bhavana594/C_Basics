//Given the side of a square, calculate the area and perimeter of the square
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int area = n * n;
    int peri = 4 * n;

    printf("%d %d", area, peri);
    return 0;
}
