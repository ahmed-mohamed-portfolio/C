#include<stdio.h>

int* arr(int a[3],int b[3]);

int main(void)
{
int a[3]={1,2,3};
int b[3]={4,5,6};
int i;


int* ptr;
ptr=arr(a,b);


for(i=0;i<3;i++)
{
  printf("%d \n",*(ptr+i));
}

    return(0);
}



int* arr(int a[3],int b[3])
{
  static int c[3];
   int i;

   for(i=0;i<3;i++)
   {
       c[i]=a[i]+b[i];
   }


    return(c);
}
