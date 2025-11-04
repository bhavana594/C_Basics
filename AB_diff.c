//Vijay is taking his baby steps into the world of programming. The very first program he's tasked to write is as follows: “Given two integers A and B, print A + B.”
//Unfortunately, Vijay makes a typo: his program outputs A × B instead of A + B. Given the values of A and B, can you help Vijay find the absolute difference between the correct answer and the value his program prints?
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", abs((a * b) - (a + b)));
    return 0;
}
