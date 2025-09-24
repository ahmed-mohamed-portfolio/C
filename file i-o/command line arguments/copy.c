


#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{

    FILE*ptr;
    FILE*ptr2;
    char ch;


   if((ptr=fopen(argv[1],"r"))==NULL)
   {
       printf("problem in file 1");
       exit(1);
   }


   if((ptr2=fopen(argv[2],"w"))==NULL)
   {
              printf("problem in file 2");
              exit(2);
   }

    while((ch=getc(ptr))!=EOF)
    putc(ch,ptr2);


    fclose(ptr);
    fclose(ptr2);


    return(0);
}

