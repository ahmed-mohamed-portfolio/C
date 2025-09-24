#include <stdio.h>



int main(void)
{


int size,i,j,newvalue,pos,k,m;
int array[200];




printf("plz enter size of array");
scanf("%d",&size);




for(i=0;i<size;i++)
{
    printf("enter element number [%d] :",i+1);
    scanf("%d",&array[i]);
}




for(j=0;j<size;j++)
{
    printf("\n element number [%d]=%d",j+1,array[j]);
}





printf("\n plz enter value of element that you want add");
scanf("%d",&newvalue);

printf("\n plz enter position of element that you want add");
scanf("%d",&pos);



if(pos<0 || pos>200)
{
    printf("faild pos ");
}
else
{
    for(k=size-1;k>=pos-1;k--)
    {
        array[k+1]=array[k];
    }
     array[pos-1]=newvalue;
     size=size+1;
}




for(m=0;m<size;m++)
{
    printf("\n element number [%d]=%d",m+1,array[m]);
}
    return(0);
}
