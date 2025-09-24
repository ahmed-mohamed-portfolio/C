#include <stdio.h>

int main(void)
{

  int array[100]={10,20,30,40,50,60,70,80,90,100,515,};
  int val,count=0,lower,upper,mid;

  printf("enter value that you want to search\n");
  scanf("%d",&val);


while (array[count] != '\0' && count < 100)
    {
        count++;
    }

printf("\n%d",count);

lower=0;
upper=count-1;


printf("\n%d",array[upper]);





do
{
    mid=(lower+upper)/2;
    if(val>array[mid])
    {
        lower=mid+1;
    }
    else if(val<array[mid])
    {
        upper=mid-1;
    }
    else if(val==array[mid])
    {
        printf("\npos is = %d",mid+1);
        break;
    }

}while(lower<=upper);



if(lower>upper)
{
    printf("\n not in array ");
}






    return(0);
}
