#include <stdio.h>

void main(void)
{
    int number;

    printf("enter your number \n");
    scanf("%d",&number);
    printf("your facorial = %d ",fact(number));
}



int fact(int num)
{
    if(num==0)
        return(1);
    else
        return(num*fact(num-1));

}
