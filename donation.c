//In a certain month, Pavan earned X rupees while Ganapathi earned Y rupees such that Y > X. 
//Since they want to end up with exactly the same amount, they decide to donate the difference between their incomes to a trust. Find the amount they donate in the month
#include <stdio.h>
int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    int diff = y - x;
    printf("%d", diff);
    return 0;
}
