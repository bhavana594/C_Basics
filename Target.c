//Most programmers will tell you that one of the ways to improve your performance in competitive programming is to practice a lot of problems. Ben took this advice seriously and decided to set a target for himself.
//He decides to solve at least 10 problems every week for 4 weeks and took an oath to do that. Given the number of problems he actually solved in each week over 4 weeks as P1, P2, P3, and P4, determine if he fulfilled his oath or not.
#include <stdio.h>
int main() {
    int p1, p2, p3, p4;
    scanf("%d %d %d %d", &p1, &p2, &p3, &p4);
    if (p1 >= 10 && p2 >= 10 && p3 >= 10 && p4 >= 10)
        printf("YES");
    else
        printf("NO");
    return 0;
}
