#include<stdio.h>


struct person{

char name[30];
int old;
float money;

};

struct person person1;
struct person person2;

struct person getdata(void);
void print_data(struct person p);
int main(void)
{


person1=getdata();
printf("--------------\n");
print_data(person1);

printf("-------------------------------\n");

person2=getdata();
printf("--------------\n");
print_data(person2);


    return(0);
}


struct person getdata(void)
{
    struct person temp;

    fflush(stdin);

    printf("enter name of person \n");
    gets(temp.name);

    printf("enter old of person \n");
    scanf("%d",&temp.old);

    printf("enter money of person \n");
    scanf("%f",&temp.money);


    return(temp);
};



void print_data(struct person p)
{

    printf("person name is %s \n",p.name);

    printf("person old is %d \n",p.old);

    printf("person money is %f \n",p.money);


}

