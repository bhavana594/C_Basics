//(Implied from the code: A single line containing an integer value representing the year.)
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int d = n % 100;
    printf("%02d\n", d);
    return 0;
}
