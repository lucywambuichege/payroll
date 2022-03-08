/*
payroll system
created by lucy
on march 8/2022
MIT license
c99
*/


#include <stdio.h>
#include <stdlib.h>

int main()

{
char name[100],kra[20];
int hours,overtime,gross,tax,net;
    printf("Gitonga\'s  Factory  n");
    //capture input
    printf("enter name:");
    gets(name);
    printf("enter kra pin:");
    gets(kra);
    printf("hours worked:");
    scanf("%d,&hours");

    //computation
    if (hours>40) {
    overtime =(hours - 40)*1.5*1000;
    gross = overtime + (40*1000);
    }
    else{
         overtime = 0;
         gross = hours * 1000;

         }
         tax =0.3 * gross;
         net = gross -tax;
         //output
         printf("employee name: %s\n", name);
         printf("gross income:%d\n",gross);
         printf("tax paid:%d\n",tax);
         printf("net income:%d\n",net);



    return 0;
}
