#include<stdio.h>

void main(void)
{

char num;
int number=0;
int count=0;


printf("plz enter your number : ");

while((num=getch())!='\r')/*read char and if it not 'enter' go on*/
{
    switch(num)
    {
    case'0':
    case'1':
    case'2':
    case'3':
    case'4':
    case'5':
    case'6':
    case'7':
    case'8':
    case'9':


            if(count<5){
                    putch(num);
                    number=number*10+num-'0';    /*  ch-'0'     ناتج العمليه ديه لو الحرف ده رقم بيكون قيمه الرقم الحسابيه*//*asci code number as char - asci code for zero = number it self*/
                    count++;
                       }

    break;






    /*لمسح حرف اتكتب*/
      case 8:/*8 معناها backspace code*//*8=\b*/

         if(count>0)
        {
            putch('\b');
            putch(' ');
            putch('\b');
            count--;
            number=number/10;
        }
        break;

    }

}

printf("\n your int number =%d",number);

}
