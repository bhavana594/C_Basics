//Find the loss percentage with given Cost Price (CP) and Selling Price (SP).
//Note: It’s guaranteed that the test cases are designed in such a way that you always get a loss
#include <stdio.h>

int main()
{
    float CP, SP;
    scanf("%f %f", &CP, &SP);  

    float loss = CP - SP;          
    float losspercent = (loss / CP) * 100;   

    printf("%.2f", losspercent);   
    return 0;
}
