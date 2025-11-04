//Kumar has recently started learning SQL.He has a table with:R rows C columns Then, he adds E extra rows to the table.
//You have to find how many total cells the table has finally
#include <stdio.h>
int main()
{
    int R, C, E;
    scanf("%d %d %d", &R, &C, &E);
    int total = (R + E) * C;
    printf("%d", total);

    return 0;
}
