#include<stdio.h>

int fact(int num);/*function prototype*/
int fact2(int n);


void main(void)
{
    int number;

    printf("enter number you want to get its factorial\n");
    scanf("%d",&number);
    printf("your fact is =%d",fact(number));
    printf("\n your fact is =%d",fact2(number));
}




int fact(int num)
{
    int facto=1;
    int i;

   for(i=num;i>0;i--)
   {
     facto=facto*i;
   }

     return(facto);
}


//factorial by recursion

int fact2(int n)
{



    int fact;
    if(n==0)
    {
        return (1);
    }
    else
    {

        fact=fact2(n-1)*(n);
        return (fact);
    }




}




