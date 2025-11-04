//In Andhra Pradesh, precipitation is measured in mm/hr using rainfall meters. The rainfall is categorized as: LIGHT → if rainfall is less than 3 mm/hr
//MODERATE if rainfall is greater than or equal to 3 mm/hr and less than 7 mm/hr HEAVY → if rainfall is greater than or equal to 7 mm/hr
//Given the rainfall rate x (in mm/hr), find whether the rain is LIGHT, MODERATE, or HEAVY

#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    if (x < 3)
        printf("LIGHT");
    else if (x >= 3 && x < 7)
        printf("MODERATE");
    else
        printf("HEAVY");

    return 0;
}
