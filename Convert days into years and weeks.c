#include <stdio.h>
int main()
{
    int days, years, weeks;
    scanf("%d", &days);
    years = days / 365;          
    days = days % 365;         
    weeks = days / 7;           
    printf("%d\n%d", years, weeks);
    return 0;
}
