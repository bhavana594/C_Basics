//Write a C program to read the age of a candidate and determine whether he or she is eligible to cast his or her own vote. A person is eligible to vote if their age is 18 or above.
#include <stdio.h>
int main()
{
    int age;
    scanf("%d", &age);

    if (age >= 18)
        printf("YES");
    else
        printf("NO");

    return 0;
}
