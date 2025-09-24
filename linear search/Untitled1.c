#include <stdio.h>

int main(void)
{

  int array[100]={1,2,3,4,5,6,7,88,99,11,55};
  int val,size,count=0,pos=0,i;

  printf("enter value that you want to search");
  scanf("%d",&val);


while (array[count] != '\0' && count < 100)
    {
        count++;
    }








  for(i=0;i<count;i++)
  {

   if (array[i]==val)
   {
       pos=i;
       break;
   }

  }


if(pos>0)
{
    printf("pos=%d",pos+1);
}
else
{
    printf("not in array");
}





    return(0);
}
