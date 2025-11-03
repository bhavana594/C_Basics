//The average weight of a group of three boys is X kgs.
//The individual weights (in kgs) of two boys — W1 (Boy 1) and W2 (Boy 2) — are given.
//Find the weight of the third boy (W3)
#include <stdio.h>

int main()
{
    int w1, w2, w3, x;
    scanf("%d %d %d", &x, &w1, &w2);

    w3 = 3 * x - w1 - w2;
    printf("%d", w3);

    return 0;
}
