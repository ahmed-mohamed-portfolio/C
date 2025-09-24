
#include<stdio.h>


int main(void)
{

    FILE*file_in;

    int number;
    char name[20];
    float money;


    if((file_in=fopen("aaaa.txt","r"))==NULL)
    {
        printf("error file");
        exit(1);
    }


   while((fscanf(file_in,"%d",&number))!=EOF)
         {

             fscanf(file_in,"%f",&money);
                fgets(name,20,file_in);
             printf("%d %s %f \n",number,name,money);
         }









    fclose(file_in);






    return(0);
}
