#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


void drowbox(void);
void gotoxy(int x,int y);


int main()
{

int pos=1;
char ch;


HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


gotoxy(39,11);
drowbox();


do{

SetConsoleTextAttribute(hConsole,15);
gotoxy(40,12);
printf("1] Add a new record");


gotoxy(40,13);
printf("2] Update a new record");


gotoxy(40,14);
printf("3] delete an existing record");


gotoxy(40,15);
printf("4] exit");










switch(pos)
{

 case 1:
SetConsoleTextAttribute(hConsole,240);
gotoxy(40,12);
printf("1] Add a new record");
break;


case 2:
SetConsoleTextAttribute(hConsole,240);
gotoxy(40,13);
printf("2] Update a new record");
break;

case 3:
SetConsoleTextAttribute(hConsole,240);
gotoxy(40,14);
printf("3] delete an existing record");
break;


case 4:
SetConsoleTextAttribute(hConsole,240);
gotoxy(40,15);
printf("4] exit");
break;

}




ch=getch();

if(ch==-32)ch=getch();
if(ch==72)
{
    pos--;
    if(pos==0)pos=4;
}


if(ch==80)
{
    pos++;
    if(pos==5)pos=1;
}



}while(1);

    return 0;
}








void gotoxy(int x,int y)
{

HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
COORD new={x,y};
SetConsoleCursorPosition(out,new);

}









void drowbox(void)
{

    int i;

    printf("%c",201);

    for(i=0;i<30;i++)
    {
       printf("%c",205);
    }

    printf("%c",187);

//----------------------------------

    for(i=12;i<16;i++)
    {
    gotoxy(39,i);
    printf("%c",186);
    }


    for(i=12;i<16;i++)
    {
    gotoxy(70,i);
    printf("%c",186);
    }

//----------------------------------

    gotoxy(39,16);

    printf("%c",200);

    for(i=0;i<30;i++)
    {
       printf("%c",205);
    }

    printf("%c",188);

}











