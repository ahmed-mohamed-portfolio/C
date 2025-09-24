#include <stdio.h>

void main(void)
{
    int number;

    printf("enter your number \n");
    scanf("%d",&number);
    binary(number);
}



void binary(int num)
{
    if(num>0)
    {
        binary(num/2);
        printf("%d",num%2);
    }
}
