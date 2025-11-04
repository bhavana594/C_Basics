//Given the base1, base2, and height of a Trapezium, calculate the area of the Trapezium.
//Note: Adjust the area up to four decimal points
#include <stdio.h>

int main() {
    int base1, base2, base3; 
    scanf("%d", &base1); 
    scanf("%d", &base2);
    scanf("%d", &base3); // base3 is the height (h)
    float area = (1.0/2.0) * (base1 + base2) * base3; 
    printf("%.4f\n", area); 
    return 0;
}
