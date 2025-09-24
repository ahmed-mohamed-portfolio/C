

//linked list in Queue Style (FIFO)



#include<stdio.h>
#include<stdlib.h>

struct player {

int age;
struct player * link;

};



int main(void)
{

    int size ,i;
    struct player *front,*back,*ptr;

    printf("enter size");
    scanf("%d",&size);

    front=NULL;

    for(i=1;i<=size;i++)
    {

        if(front==NULL)
        {
            ptr=(struct player*)malloc(sizeof(struct player));
            front=ptr;
        }
        else{
            ptr->link=(struct player*)malloc(sizeof(struct player));
            ptr=ptr->link;
            back=ptr;
        }


        if(ptr->link!=NULL)
        {
            printf("enter age ");
            scanf("%d",&ptr->age);
            ptr->link=NULL;
        }

    }




ptr=front;
while(ptr!=NULL)
{
    printf("%d",ptr->age);
    ptr=ptr->link;
}




    return(0);
}
