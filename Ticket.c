//Four friends want to attend a concert. Each ticket costs X rupees.
//They have decided to go to the concert if and only if the total cost of the tickets does not exceed 1000 rupees.
//Determine whether they will be going to the concert or not

#include <stdio.h>
int main() {
    int x;
    scanf("%d", &x);
    int y = 4 * x;
    if (y <= 1000)
        printf("YES");
    else
        printf("NO");
    return 0;
}
