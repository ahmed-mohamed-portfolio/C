

#include<stdio.h>


int main(void)
{

    FILE*file_in;

    int number;
    char name[20];
    float money;


    if((file_in=fopen("aaaa.txt","rb"))==NULL)
    {
        printf("error file");
        exit(1);
    }



   while((fread(&number,sizeof(number),1,file_in))==1)
         {

             fread(name,sizeof(name),1,file_in);
             fread(&money,sizeof(money),1,file_in);

             printf("%d %s %f \n",number,name,money);
         }




    fclose(file_in);






    return(0);
}
