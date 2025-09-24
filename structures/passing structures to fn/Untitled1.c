#include <stdio.h>

struct person{

char name[30];
int old;
float money;

};

struct person p1={"ahmed",44,5000.55};
struct person p2={"mohamed",54,6460.66};


void print_info(struct person p);
void inc_old(struct person *p);
int main(void)
{

    print_info(p1);
    printf("--------------\n");
    print_info(p2);

    printf("--------------\n");


    struct person *ptr;
    ptr=&p1;
    inc_old(ptr);
    print_info(p1);


    return(0);
}



void print_info(struct person p)
{
    printf("name=%s \n",p.name);
    printf("old=%d \n",p.old);
    printf("money=%5.2f \n",p.money);

}



void inc_old(struct person *p)
{
    (*p).old++;
}


