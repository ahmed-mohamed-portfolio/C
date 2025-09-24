
#include<stdio.h>


int main(void)
{

    FILE*file_out;

    int number;
    char name[20];
    float money;


    if((file_out=fopen("aaaa.txt","wb"))==NULL)
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

        fwrite(&number,sizeof(number),1,file_out);
        fwrite(name,sizeof(name),1,file_out);
        fwrite(&money,sizeof(money),1,file_out);



    }while(1);


    fclose(file_out);






    return(0);
}
