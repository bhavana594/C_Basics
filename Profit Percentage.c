#include <stdio.h>
int main()
{
    float CP, SP;
    scanf("%f %f", &CP, &SP);          

    float profit = SP - CP;           
    float profitpercent = (profit / CP) * 100;  

    printf("%.2f", profitpercent);     
    return 0;
}
