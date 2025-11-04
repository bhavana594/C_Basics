//Write a C program to check whether a character is uppercase or lowercase. A character is an uppercase alphabet 
//if it lies between 'A' and 'Z', a lowercase alphabet if it lies between 'a' and 'z', and if it doesn’t belong to either range, then it is not an alphabet.
#include <stdio.h>
int main() {
    char ch;
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
        printf("uppercase alphabet");
    else if (ch >= 'a' && ch <= 'z')
        printf("lowercase alphabet");
    else
        printf("not an alphabet");
    return 0;
}
