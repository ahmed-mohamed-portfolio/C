#include <stdio.h>

void main(void)
{

    /*
    FILE * ptr;

    char str[50];

    ptr=fopen("aaa.txt","w");
    while(strlen(gets(str))>0)
    {
        fputs(str,ptr);
        fputs("\n",ptr);
    }


    fclose(ptr);

    */

       FILE * ptr;

    char str[50];

    ptr=fopen("aaa.txt","r");
    while(fgets(str,50,ptr)!=NULL)
    {
        printf("%s",str);

    }


    fclose(ptr);



}
