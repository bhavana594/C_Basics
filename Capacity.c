//Consider a disk has 2 surfaces, each surface is divided into T tracks and each track is divided into S sectors,
//each sector is divided into B blocks.Each block has 512 bytes of memory. So find the capacity of the disk (in KB's).
#include<stdio.h>

int main()

{
int t,s,b;
scanf("%d",&t);
scanf("%d",&s);
scanf("%d",&b);
int result =(2*t*s*b*512)/1024;
printf("%d KB", result);
return 0;

}
