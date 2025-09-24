



#include<stdio.h>

struct person{
    int number;
    char name[20];
    float money;
};

int main(void)
{
struct person p;
int offset;
int pos;
    FILE*file_in;




    if((file_in=fopen("aaaa.txt","rb"))==NULL)
    {
        printf("error file");
        exit(1);
    }

    printf("enter pos");
    scanf("%d",&pos);


offset=(pos-1)*sizeof(p);

fseek(file_in,offset,0);

    fread(&p,sizeof(p),1,file_in);


printf("%d %s %f",p.number,p.name,p.money);


    fclose(file_in);






    return(0);
}
