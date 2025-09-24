#include <stdio.h>


void temps(float a[],int b);
float max(float array[],int j);
float avg(float array[],int j);


int main(void)
{

float temp_day[5];
int i=0;
int num;

do
{
    if(i<5)
    {
        printf("enter temp of day [%d]: ",i+1);
        scanf("%f",&temp_day[i]);
    }
    else
    {
        printf("you reach to max size of array\n");
        break;
    }

}while(temp_day[i++]>0);

num=i-1;

temps(temp_day,num);

printf("\n max number = %7.2f",max(temp_day,num));

printf("\n avg = %7.2f",avg(temp_day,num));


return(0);

}












void temps(float a[],int b)
{
    int j;
if(a[b]==0)
{

    for(j=0;j<b;j++)
    {
        printf("\n temp of day [%d] = %7.2f",j+1,a[j]);
    }

    printf("\n number of elements = %d",b);
}
else
    {
        for(j=0;j<b+1;j++)
    {
        printf("\n temp of day [%d] = %7.2f",j+1,a[j]);
    }

    printf("\n number of elements = %d",b+1);
    }


}














float avg(float array[],int j)
{
   int i=0;
   float sum =0.0;
   float avg,avg2;

   if(array[j]==0)
   {
          for(i=0;i<j;i++)
          {
           sum+=array[i];
          }
          avg=sum/j;
          return(avg);
   }
   else
    {

              for(i=0;i<j+1;i++)
              {
              sum+=array[i];
              }
              avg2=sum/(j+1);
              return(avg2);
    }



}









float max(float array[],int j)
{
int i;
float maxnumber =0.0;

   for(i=0;i<j+1;i++)
   {
       if(array[i]>maxnumber){maxnumber=array[i];}
   }

   return(maxnumber);
}


