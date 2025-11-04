//print the color name based on a single character Color code input (e.g., 'V' for Violet). 
//Print "-1" if the character is not one of the specified codes.
#include <stdio.h>
int main() {
    char code;
    if (scanf(" %c", &code) != 1) {
        printf("-1\n");
        return 0;
    }
    switch (code) {
        case 'V':
            printf("Violet\n");
            break;
        case 'I':
            printf("Indigo\n");
            break;
        case 'B':
            printf("Blue\n");
            break;
        case 'G':
            printf("Green\n");
            break;
        case 'Y':
            printf("Yellow\n");
            break;
        case 'O':
            printf("Orange\n");
            break;
        case 'R':
            printf("Red\n");
            break;
        default:
            printf("-1\n");
            break;
    }
    
    return 0;
}
