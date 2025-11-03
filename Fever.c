//Pavan is not feeling well today. He measured his body temperature using a thermometer, and it came out to be X°F.
//A person is said to have fever if his body temperature is strictly greater than 98°F
#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    if (x > 98)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
