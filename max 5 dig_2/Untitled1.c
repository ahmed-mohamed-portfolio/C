#include <stdio.h>

int main(void)
{

    char ch;
    int number=0 , count=0;


    printf("plz enter your number : ");

    while((ch=getch())!='\r')
    {
            if(ch>='0' && ch<='9')
             {
                 if(count<5){
                               putch(ch);
                               number=number*10+ch-'0';
                               count++;
                             }

             }



               if (ch == '\b' && count>0)
                {
                    printf("\b \b");
                    number=number/10;
                    count--;
                }

    }


printf("\nnumber you enter = %d",number);


    return(0);
}
