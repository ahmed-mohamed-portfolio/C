#include<stdio.h>

int main(void)
{

    FILE*ptr;
    FILE*ptr2;
    char ch;


   if((ptr=fopen("C:\\Users\\Ahmed Saleh\\Desktop\\file i-o\\copy file\\aaa.txt","r"))==NULL)
   {
       printf("problem in folder 1");
       exit(1);
   }


   if((ptr2=fopen("C:\\Users\\Ahmed Saleh\\Desktop\\file i-o\\copy file\\qqq.txt","w"))==NULL)
   {
              printf("problem in folder 2");
              exit(2);
   }

    while((ch=getc(ptr))!=EOF)
    putc(ch,ptr2);


    fclose(ptr);
    fclose(ptr2);


    return(0);
}
