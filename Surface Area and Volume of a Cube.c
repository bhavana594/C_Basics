//Given an integer value side of a Cube, calculate the Surface Area and Volume of the cube.
#include <stdio.h>
int main() {
    int R; 
    scanf("%d", &R); 
    float area = 6.0 * R * R; 
    float volume = R * R * R; 
    printf("Surface area = %.f and Volume = %.f\n", area, volume); 
    return 0;
}
