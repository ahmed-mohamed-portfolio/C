#include <stdio.h>
#include <string.h>


int main(void)
{
    int n,i,jj,j,k;
    char name[50][25];
    char temp[10];


    printf("enter number of names : ");
    scanf("%d",&n);

    fflush(stdin);


    for(i=0;i<n;i++)
    {
        printf("\n enter name [%d]:",i+1);
        gets(name[i]);
    }

for(jj=0;jj<n-1;jj++)
{
    for(j=jj;j<n-1;j++)
    {

       if(strcmp(name[jj],name[j+1])>0)
       {
           strcpy(temp,name[jj]);
           strcpy(name[jj],name[j+1]);
           strcpy(name[j+1],temp);
       }

    }
}


printf("---- names after sorting ---");

for(k=0;k<n;k++)
{
    printf("\n %s",name[k]);
}



    return(0);
}
