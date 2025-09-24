#include <stdio.h>

void main(void)
{
    double num1;
    double num2;
    double sum;


    printf("please enter first number \n");
    scanf("%lf",&num1);

    printf("please enter second number \n");
    scanf("%lf",&num2);

    printf("sum =%.0lf",(num1+num2));
}
