//King loves to go on tour with his friends. King has N cars that can seat 5 people each and M cars taht can seat 7 
//people each. Determine the maximum number of people taht can travel together in these car
#include<stdio.h>
int main()
{
int n,m;
scanf("%d %d",&n,&m);
int max = (5*n)+(7*m);
printf("%d",max);
return 0;
}
