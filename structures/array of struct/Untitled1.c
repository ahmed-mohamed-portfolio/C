#include<stdio.h>


struct player{

char name[30];
int old;
float money;

};


int main(void)
{
int size,i,j,m,k;
struct player p[100];

printf("please enter number of players less than 100 : ");
scanf("%d",&size);

printf("\n--------------------------------------------\n");
for(i=0;i<size;i++)
{
printf("info of player number [%d]\n",i+1);
fflush(stdin);

printf("enter the name of player : ");
gets(p[i].name);

printf("enter old of player : ");
scanf("%d",&p[i].old);

printf("enter money of player : ");
scanf("%f",&p[i].money);

printf("\n---------------------\n");
}


//sorting


for(m=0;m<size-1;m++)
{
    for(k=m;k<size;k++)
    {
        if(p[m].money<p[k+1].money)
        {
            struct player temp;
            temp=p[m];
            p[m]=p[k+1];
            p[k+1]=temp;
        }

    }
}











printf("no \t\t name \t\t old \t\t money\n");
printf("\n-----------------------------------------------------\n");

for(j=0;j<size;j++)
{
   printf("%d \t\t %s \t\t %d \t\t %4.2f\n",j+1,p[j].name,p[j].old,p[j].money);
}











    return(0);
}




