#include <stdio.h>



int main(void)
{
    int i;
    char * names[3]={"aaaaaaaaaa","bbbbbbbb","ccccccccccc"};

    char *(*ptr)[3]=&names;

    for(i=0;i<3;i++)
    {

        printf("%s \n",(*ptr)[i]);
    }

    return(0);
}
