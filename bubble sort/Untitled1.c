#include <stdio.h>


int main(void)
{
    //---------------variables------------
    int n,temp,i,j,flag=0;
    int array[]={1,4,5,2,3,6};


    //---------------size of array ----------
n=(sizeof(array))/(sizeof(array[0]));
printf("size of array = %d \n ",n);

   //--------------bubble sort algorithm -----------

   while(flag==0)
   {

             flag=1;
for(i=0;i<n-1;i++)
{
    if(array[i+1]>array[i])
    {
        temp;
        temp=array[i];
        array[i]=array[i+1];
        array[i+1]=temp;

        flag=0;
    }

}


   }




//----------array after sort ------------
printf("\n data after sort \n");
for(j=0;j<n;j++)
{
    printf("%d \t",array[j]);
}




    return(0);
}
