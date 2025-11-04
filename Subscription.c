//Pavan wants to conduct a lecture for which he needs to set up an online meeting of exactly X minutes. The meeting platform supports:
//A meeting of 40 minutes without a subscription. A meeting of unlimited duration with a subscription. Determine whether Pavan needs to take a subscription or not for setting the meeting
#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if (x > 40)
        printf("YES");
    else
        printf("NO");
    return 0;
}
