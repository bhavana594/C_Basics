//Given an integer value representing minutes, convert the given minutes into hours and minutes form.
#include <stdio.h>

int main()
{
    int min;
    scanf("%d", &min);

    int hours = min / 60;
    int mins = min % 60;

    printf("%d Hour(s) %d Minute(s)", hours, mins);
    return 0;
}
