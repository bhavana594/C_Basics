//The C code correctly calculates the required difference by subtracting the collected donations (x) from the target (n).
#include <stdio.h>

int main() {
    int n, x;
    scanf("%d %d", &n, &x);
    int result = n - x;
    printf("%d\n", result);
    return 0;
}
