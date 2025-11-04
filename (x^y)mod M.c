//The problem description mentions the Python.math module and the function math.pow(x, y), 
//which returns $x$ raised to the power $y$. The goal is to perform this power calculation and then find the remainder when divided by $M$
#include <stdio.h>
#include <math.h>
int main() {
    int x, y, m;
    scanf("%d %d %d", &x, &y, &m);
    int p = (int)((long long)round(pow(x, y)) % m);
    printf("%d\n", p);
    return 0;
}
