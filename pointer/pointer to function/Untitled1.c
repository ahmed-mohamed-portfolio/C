#include <stdio.h>

int calc(int x,int y,char z);
int main(void)
{
 int a,b;
 char c;
 int(*ptr)(int,int,char);

 printf("please enter first number");
 scanf("%d",&a);

 printf("please enter second number");
 scanf("%d",&b);

 printf("please enter operation");
 scanf(" %c",&c);



 ptr=calc;
 printf("%d",ptr(a,b,c));








    return(0);
}


int calc(int x,int y,char z)
{
    int answer;

    switch(z)
    {
        case '+' : answer=x+y ;
        break;
        case '-' : answer=x-y ;
        break;
        case '*' : answer=x*y ;
        break;
        case '/' : answer=x/y ;
        break;
    }



    return(answer);

}
