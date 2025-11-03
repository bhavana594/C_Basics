//Take two numbers num1 and num2 as input from the user and find the modulus of them.
#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);

    int mod = n % m;
    printf("%d", mod);

    return 0;
}
