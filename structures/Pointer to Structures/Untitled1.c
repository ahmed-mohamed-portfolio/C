#include <stdio.h>
#include <string.h>

struct player {

        char name[30];
        float tall;
        int experience;

    };

struct player p1={"ahmed",2.5,33};
struct player p2={"mohamed",5.5,22};




int main(void) {

p1.tall=44.4;
printf("player one tall=%4.2f",p1.tall);

struct player * ptr ;
ptr=&p1;

printf("player one tall=%s",ptr->name);
    return 0;
}

