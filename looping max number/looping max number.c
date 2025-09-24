#include <stdio.h>

void main(void)
{
    int num,compare;



    for(int i=1;i>0;i++)
    {
        printf("enter number [%d] : ",i);
        if(scanf("%d",&num)==0){break;}
        if(i==1){ compare=num;}
        if(num>compare){compare=num;}
    }

    printf("max num is %d",compare);

}
