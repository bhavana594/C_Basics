//Given that a mango weighs X kg, a truck weighs Y kg, and a bridge can withstand Z kg,
find the maximum number of mangoes the truck can carry to safely cross the bridge.
  
#include<stdio.h>

int main()

{

int x,y,z;

scanf("%d%d%d",&x,&y,&z);

int rem = z-y;

int maxmano = rem /x;

printf("%d", maxmano);

return 0;
