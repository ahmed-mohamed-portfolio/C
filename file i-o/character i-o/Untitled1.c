#include<stdio.h>


int main(void)
{

//write to file
FILE*fptr;
char ch;
fptr=fopen("C:\\Users\\Ahmed Saleh\\Desktop\\file i-o\\character i-o\\tttttttt.txt","w");

while((ch=getche())!='\r')
    putc(ch,fptr);

fclose(fptr);



    return(0);
}
