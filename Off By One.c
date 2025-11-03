//You just bought a new calculator, but it seems to have a small problem: all its results have an extra 1 appended to the end.
#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    int C = A + B;
    printf("%d1", C);

    return 0;
}
