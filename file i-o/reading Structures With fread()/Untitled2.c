


#include<stdio.h>

struct person{
    int number;
    char name[20];
    float money;
};

int main(void)
{
struct person p;

    FILE*file_in;




    if((file_in=fopen("aaaa.txt","rb"))==NULL)
    {
        printf("error file");
        exit(1);
    }



   while((fread(&p,sizeof(p),1,file_in))==1)
         {
             printf("%d %s %f \n",p.number,p.name,p.money);
         }




    fclose(file_in);






    return(0);
}
