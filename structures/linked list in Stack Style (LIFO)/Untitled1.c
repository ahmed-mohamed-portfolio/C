//linked list in Queue Style (LIFO)

#include<stdio.h>
#include<stdlib.h>

struct player {

int age;
struct player * link;

};



int main(void)
{

    int size ,i;
    struct player *top,*ptr;

    printf("enter size");
    scanf("%d",&size);

    top=NULL;

    for(i=1;i<=size;i++)
    {

        if(top==NULL)
        {
            ptr=(struct player*)malloc(sizeof(struct player));
            top=ptr;
            ptr->link=NULL;
        }
        else{
            ptr=(struct player*)malloc(sizeof(struct player));
            ptr->link=top;
            top=ptr;
        }


        if(ptr!=NULL)
        {
            printf("enter age ");
            scanf("%d",&ptr->age);

        }

    }




ptr=top;
while(ptr!=NULL)
{
    printf("%d",ptr->age);
    ptr=ptr->link;
}




    return(0);
}

