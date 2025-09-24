#include <stdio.h>


int main(void)
{


    int array[2][3];
    int i,j;


    for(i=0;i<2;i++)
    {
        printf("plz enter element or row [%d]:",i);
        for(j=0;j<3;j++)
        {

            scanf(" %d",&array[i][j]);
        }
    }

    printf("\n two dimintional array elemnts \n");






    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d  ",array[i][j]);

        }
        printf("\n");
    }




    return(0);
}
