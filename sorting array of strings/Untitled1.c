#include <stdio.h>
#include <string.h>

int main(void)
{


char name[100][25];
char temp[25];
int n,i,j,ii,k;

printf("enter number of names < 100 \n");
scanf("%d",&n);

fflush(stdin);


for(i=0;i<n;i++)
{
    printf("enter name [%d]: ",i+1);
    gets(name[i]);
}

for(j=0;j<n-1;j++)
{
    for(ii=j+1;ii<n;ii++)
{
    if(strcmp(name[j],name[ii])<0)
    {
        strcpy(temp,name[j]);
        strcpy(name[j],name[ii]);
        strcpy(name[ii],temp);
    }
}
}


printf("name sorted");
for(k=0;k<n;k++)
{
    printf(" \n %s",name[k]);
}


    return(0);
}
