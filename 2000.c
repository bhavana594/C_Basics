//Aditya had collected N notes of Rs.2000 to pay his total college fees. However, the government banned Rs.2000 notes.
//Aditya wants to pay the same amount using Rs.500 notes only. Find the number of notes Aditya needs
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int result = (n * 2000) / 500;
    printf("%d", result);
    return 0;
}
