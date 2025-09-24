#include<stdio.h>


int main(void)
{

    FILE*file_out;

    int number;
    char name[20];
    float money;


    if((file_out=fopen("aaaa.txt","w"))==NULL)
    {
        printf("error file");
        exit(1);
    }

    do{
        printf("enter number ? \n");
        scanf("%d",&number);

        if(number==0){break;}

        fflush(stdin);

        printf("enter name ? \n");
        gets(name);


        printf("enter money ? \n");
        scanf("%f",&money);

        fprintf(file_out,"%-5d  %-7.2f %-30s \n",number,money,name);

    }while(1);


    fclose(file_out);






    return(0);
}
