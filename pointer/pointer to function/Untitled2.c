#include<stdio.h>

int add(int x,int y);
int sub(int x,int y);
int mul(int x,int y);
int div(int x,int y);


int main(void)
{

 int a,b,c;

      int(*calcu[4])(int,int)={add,sub,mul,div};


 printf("please enter first number");
 scanf("%d",&a);

 printf("please enter second number");
 scanf("%d",&b);

 printf("please enter operation  1-add , 2-sub , 3-mul , 4-div");
 scanf("%d",&c);

    printf("%d",calcu[c-1](a,b));

    return(0);
}


int add(int x,int y){return(x+y);}
int sub(int x,int y){return(x-y);}
int mul(int x,int y){return(x*y);}
int div(int x,int y){return(x/y);}
