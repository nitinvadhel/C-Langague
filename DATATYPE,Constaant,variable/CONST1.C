#include<stdio.h>
#include<conio.h>
#define pi 3.14

main()
{
    int r;
    float area;

    clrscr();
    r= 2;
    area= pi*r*r;
    printf("area of circle= % .3f",area);

    getch();

}