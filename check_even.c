//***CHECK THE NUMBER IS EVEN***
#include <stdio.h>
void main() 
{
    int num;
    printf("Enter an integer: \n");
    scanf("%d", &num);
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is not even.", num);
}