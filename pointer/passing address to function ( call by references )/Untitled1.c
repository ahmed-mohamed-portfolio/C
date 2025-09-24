#include <stdio.h>

int* sum(int a[],int b[]);
int main(void)
{
int i;
 int a[3]={1,2,3};
 int b[3]={4,5,6};
 int *c;

c=sum(a,b);

for(i=0;i<3;i++)
{
    printf("%d \t",*c);
    c++;
}

    return(0);
}


int* sum(int a[],int b[])
{
    int c[3];
    int i;
    for(i=0;i<3;i++)
    {
        c[i]=a[i]+b[i];
    }

    return (c);
}



