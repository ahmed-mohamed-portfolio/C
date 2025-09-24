#include <stdio.h>

int check_magic_row(int s,int m[s][s],int row);
int check_magic_col(int s,int m[s][s],int col);
int check_magic_dig_right(int s,int m[s][s]);
int check_magic_dig_left(int s,int m[s][s]);

int main(void)
{
    int n,r,c,val,i,j,k,l,checkNumber,p,q,rr,s,ii,jj;




    do{

       printf("square num * num ?");
       scanf("%d",&n);


    if (n < 1 || n % 2 == 0)
        {
        printf("please enter positive odd number\n");
        }


    }while(n < 1 || n % 2 == 0);




    int array[n+1][n+1];
    int temp[n][n];




    //initial
    r=1;
    c=(n+1)/2;
    val=1;

    //magic square algorithm
    do
    {

        array[r][c]=val;

        if(val%n==0)
        {
            r++;

        }
        else
            {
               r--;
               c--;

            }
        if(r==0)r=n;
        if(c==0)c=n;


     val++;
    }while(val<=n*n);



//to show magic square

for(i=1;i<n+1;i++)
{
    printf("\n");
    for(j=1;j<n+1;j++)
    {
        printf(" \t %d",array[i][j]);
    }
}

// number so sum all col and dig and row
checkNumber=(n*(n*n+1))/2;
printf("\n rows and col and dig sum =%d",checkNumber);


//send all two dim. array to another one
for(p=0;p<n+1;p++)
{
    for(q=0;q<n+1;q++)
    {
        temp[p][q]=array[p+1][q+1];
    }
}

/*
//show new two dim. array
for(rr=0;rr<n;rr++)
{
    printf("\n");
    for(s=0;s<n;s++)
    {
        printf("%d",temp[rr][s]);
    }
}
*/

for(ii=0;ii<n;ii++){
printf("\ncheck row %d %d",ii,check_magic_row(n,temp,ii));
}


for(jj=0;jj<n;jj++){
printf("\ncheck col %d %d",jj,check_magic_col(n,temp,jj));
}


printf("\ncheck dig right  %d",check_magic_dig_right(n,temp));
printf("\ncheck dig left  %d",check_magic_dig_left(n,temp));





//check magic any 2d array
printf("\n-------------------------");
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

for(ii=0;ii<3;ii++){
printf("\ncheck row %d %d",ii,check_magic_row(3,arr,ii));
}


for(jj=0;jj<n;jj++){
printf("\ncheck col %d %d",jj,check_magic_col(3,arr,jj));
}


printf("\ncheck dig right  %d",check_magic_dig_right(3,arr));
printf("\ncheck dig left  %d",check_magic_dig_left(3,arr));

    return(0);
}







int check_magic_row(int s,int m[s][s],int row)
{
    int i,sum=0;
for(i=0;i<s;i++)
{
    sum+=m[row][i];
}


return (sum);
}





int check_magic_col(int s,int m[s][s],int col)
{
    int i,sum=0;
for(i=0;i<s;i++)
{
    sum+=m[i][col];
}


return (sum);
}


int check_magic_dig_right(int s,int m[s][s])
{
int i,j,sum=0;
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
            if(i==j)
            {
                sum+=m[i][j];
            }
        }
    }

    return(sum);
}






int check_magic_dig_left(int s,int m[s][s])
{
int i,j,sum=0;
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
            if(i==s-(j+1))
            {
                sum+=m[i][j];
            }
        }
    }

    return(sum);
}
