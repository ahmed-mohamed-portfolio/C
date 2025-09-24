#include<stdio.h>

int main(void)
{
int i;
char * name ;

name="ahmed";

puts(name);

for(i=0;i<5;i++)
{
    printf("%c \n",*name);
    name++;
}


    return(0);
}
