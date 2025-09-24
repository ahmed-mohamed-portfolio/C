#include <stdio.h>


int main(void)
{

    int array[100]={20,10,30};
    int i,j,x,k,count=0;



while (array[count] != '\0' && count < 100)
    {
        count++;
    }


printf("\n elements count = %d \n",count);



for(i=0;i<count-1;i++)
{
    for(j=i;j<count-1;j++)
    {
        if(array[j+1]>array[i])
        {
        x=array[i];
        array[i]=array[j+1];
        array[j+1]=x;
        }
    }
}







printf("\n array after sort from highr to lower \n");
for (k=0;k<count;k++)
{
    printf("%d \t",array[k]);
}




for(i=0;i<count-1;i++)
{
    for(j=i;j<count-1;j++)
    {
        if(array[j+1]<array[i])
        {
        x=array[i];
        array[i]=array[j+1];
        array[j+1]=x;
        }
    }
}



printf("\n array after sort from lower to highr \n");
for (k=0;k<count;k++)
{
    printf("%d \t",array[k]);
}





    return(0);
}
