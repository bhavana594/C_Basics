//In a tournament,Each goal gives 2 points Each assist gives 1 point
//Messi has A goals and B assists.
//Ronaldo has X goals and Y assists.
//You need to find out who has more total points, or print "Equal" if both have the same
#include <stdio.h>
int main()
{
    int A, B, X, Y;
    scanf("%d %d %d %d", &A, &B, &X, &Y);

    int messi = (A * 2) + (B * 1);
    int ronaldo = (X * 2) + (Y * 1);

    if (messi == ronaldo)
        printf("Equal");
    else if (messi > ronaldo)
        printf("Messi");
    else
        printf("Ronaldo");

    return 0;
}
