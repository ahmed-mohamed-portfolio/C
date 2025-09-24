#include <stdio.h>


int size=0;
int i,j,row,col,ii,jj,roow,cool;
int k=0;
int m=0;

int main() {

   int matrix[5][6]={{0,0,0,0,9,0},{0,8,0,0,0,0},{4,0,0,2,0,0},{0,0,0,0,0,5},{0,0,2,0,0,0}};

for(i=0;i<5;i++)
{
    for(j=0;j<6;j++)
{
    if(matrix[i][j]!=0)
    {
       size++;

    }
}

}


int spare[3][size];

for(row=0;row<5;row++)
{
    for(col=0;col<6;col++)
{
    if(matrix[row][col]!=0)
    {

       spare[2][k]=matrix[row][col];
       spare[0][k]=row;
       spare[1][k]=col;

        k++;
    }
}

}




for(ii=0;ii<3;ii++)
{
    printf("\n");
    for(jj=0;jj<size;jj++)
{
   printf(" %d",spare[ii][jj]);
}

}


printf("\n ============= \n");


for(roow=0;roow<5;roow++)
{
    printf("\n");
    for(cool=0;cool<6;cool++)
{
    if(roow==spare[0][m] && cool==spare[1][m])
    {
      printf("%d",spare[2][m]);
      m++;
    }
    else {printf("0");}

}

}

    return (0);
}
