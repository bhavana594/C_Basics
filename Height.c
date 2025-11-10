//Consider a fraction x / y Its height is defined as the maximum of its numerator and denominator.
#include <stdio.h>
int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    if (x > y)
        printf("%d", x);
    else
        printf("%d", y);
    return 0;
}
