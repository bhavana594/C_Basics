//Convert the Speed kilometer per hour to meter per second

#include<stdio.h>
int main()
{
int kmph;
float mps;
scanf("%d",&kmph);
mps = kmph *(5.0/18);
printf("%d.2f",mps);
return 0;
}
