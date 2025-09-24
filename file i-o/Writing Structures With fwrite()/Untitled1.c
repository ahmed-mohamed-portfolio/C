

#include<stdio.h>

struct person{
    int number;
    char name[20];
    float money;

};



int main(void)
{
struct person p;

    FILE*file_out;




    if((file_out=fopen("aaaa.txt","wb"))==NULL)
    {
        printf("error file");
        exit(1);
    }

    do{
        printf("enter number ? \n");
        scanf("%d",&p.number);

        if(p.number==0){break;}

        fflush(stdin);

        printf("enter name ? \n");
        gets(p.name);


        printf("enter money ? \n");
        scanf("%f",&p.money);

        fwrite(&p,sizeof(p),1,file_out);




    }while(1);


    fclose(file_out);






    return(0);
}
