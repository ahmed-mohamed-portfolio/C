#include <stdio.h>



int num_of_char(char array[]);
int palindrome(char array2[]);

int main(void)
{

    char name[20];

    printf("plz enter your name ");
    gets(name);
    printf("hello %s",name);

    printf("\n your name consists of %d char",num_of_char(name));

    if(palindrome(name)==1)
    {
        printf("\n your name is palindrome");
    }

    else if(palindrome(name)==0)
    {
        printf("\n your name is not palindrome");
    }


    return(0);
}





int num_of_char(char array[])
{
int count=0;

while(array[count]!='\0')
{
    count++;
}


return(count);

}





int palindrome(char array2[])
{

    int i;
    int res=1;
    for(i=0;i<num_of_char(array2)/2;i++)
    {
        if(array2[i]!=array2[num_of_char(array2)-1-i])
        {
            res=0;
            break;
        }
    }



    return(res);

}
