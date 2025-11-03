//When two taps are working together to fill an empty tank, you can calculate the time it takes to fill the tank using the concept of rates.
//Tap A fills the tank in X minutes.
//Tap B fills the tank in Y minutes.
//You need to find how long both taps together will take to fill the tank.
#include <stdio.h>

int main()
{
    int a, b, result;
    scanf("%d %d", &a, &b);
    result = (a * b) / (a + b);
    printf("%d", result);
    return 0;
}
