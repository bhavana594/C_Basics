//Convert Seconds into hours, minutes, seconds and print them in a single line in the format: H:M:S-h:m:s
#include <stdio.h>
int main() {
    int total_seconds;
    int H, M, S;
    scanf("%d", &total_seconds);
    H = total_seconds / 3600;
    int remaining_seconds = total_seconds % 3600;
    M = remaining_seconds / 60;
    S = remaining_seconds % 60;
    printf("H:M:S-%d:%d:%d\n", H, M, S);
    return 0;
}
