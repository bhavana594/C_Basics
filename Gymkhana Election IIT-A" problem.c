#include <stdio.h>
int main() {
    int M, N;
    if (scanf("%d %d", &M, &N) != 2)
    {
        return 1; 
    }
    int X = M + N - 1; 
    int required_votes = (X + N - 1) / N;
    printf("%d\n", required_votes)
    return 0;
}
