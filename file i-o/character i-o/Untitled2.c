#include<stdio.h>


int main(void)
{




//read from file
FILE*fptr1;
char ch1;
fptr1=fopen("C:\\Users\\Ahmed Saleh\\Desktop\\file i-o\\character i-o\\tttttttt.txt","r");

while((ch1=getc(fptr1))!=EOF)
    putchar(ch1);


fclose(fptr1);

    return(0);
}
