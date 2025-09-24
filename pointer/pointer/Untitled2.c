#include <stdio.h>

int main(void)
{



    //---------------------------------------------------
    int x=44;
    int *ptr;

    ptr=&x;


    printf("x=%d \n",x);
    printf("adress x = %u \n",ptr);
    printf("adress x = %u \n",&x);
    printf(" x = %d \n",*ptr);

    *ptr=80;
     printf("x=%d \n",x);

      printf("--------------------------------------\n");
    //---------------------------------------------------


     float y=5.5;
     float *ptr2;
     ptr2=&y;

     printf("size ptr = %d\n",sizeof(ptr));
     printf("size ptr2 = %d\n",sizeof(ptr2));

     printf("--------------------------------------\n");
   //---------------------------------------------------

   void *ptr3;
   void *ptr4;

   ptr3=&x;
   ptr4=&y;

   printf("x= %d \n",*((int*)ptr3));
   printf("y= %f \n",*((float*)ptr4));

    printf("--------------------------------------\n");
//---------------------------------------------------

    int xx=20;
    int* ptr5;

    ptr5=&xx;

    printf("xx=%d \n",*ptr5);
    printf("ptr5 = %u \n",ptr5);
    ptr5 ++;
    printf("ptr5 = %u \n",ptr5);
    printf("xx=%d \n",*ptr5); //garbage value

    printf("--------------------------------------\n");
//---------------------------------------------------

int arr[]={10,2,33,4,56,333};
int i;
int* ptr6;

ptr6=&arr[0];


printf(" \n ptr6=%u  -- *ptr6=%d \n",ptr6,*ptr6);


for(i=0;i<6;i++)
{
    printf("value number [%d] = %d \n",i+1,*ptr6++);


}

ptr6--;
printf(" \n ptr6=%u  -- *ptr6=%d \n",ptr6,*ptr6);




 printf("--------------------------------------\n");
//---------------------------------------------------

int z=10;
int *ptr7;
int **ptr8;


ptr7=&z;
ptr8=&ptr7;


printf("z=%d \n",z);
printf("ptr7=%d \n",*ptr7);
printf("ptr8=%d \n",**ptr8);

printf("--------------------------------------\n");
//---------------------------------------------------

// equal to    char name2[]="ahmed";
char *name2="ahmed";
int ii;

printf("%s \n",name2);

for(ii=0;ii<5;ii++)
{
  printf("%c \n",name2[ii]);
}
printf("%s \n",name2);
printf("%s \n",name2);

printf("--------------\n");
int iii;
printf("%s \n",name2);

for(iii=0;iii<5;iii++)
{
  printf("%c \n",*name2++);

}

printf("%s \n",name2);
printf("%s \n",name2);
printf("%s \n",name2);
printf("%s \n",name2);

printf("\n--------------------------------------\n");

//---------------------------------------------------

int x1=300;
int yyy=200;
int* const ptr9=&x1;


//    ptr9++;

*ptr9=700;
printf("x1=%d",x1);


printf("\n--------------------------------------\n");
//---------------------------------------------------


int x2=300;
int yy2=200;
const int* ptr10=&x2;


 ptr10=&yy2;

// *ptr10=700;
printf("pt10=%d",*ptr10);


printf("\n--------------------------------------\n");
//---------------------------------------------------





    return(0);
}
