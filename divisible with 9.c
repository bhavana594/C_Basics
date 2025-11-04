//Write a C program to check whether the given number is divisible with 9 or not
#include <stdio.h>
int main() 
{
    int n;
    scanf("%d", &n);
    if (n % 9 == 0)
        printf("True");
    else
        printf("False");
    return 0;
}
