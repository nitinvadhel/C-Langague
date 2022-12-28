#include<stdio.h>
#include<conio.h>

main()
{
    int x,y,z;
    clrscr();

    printf("Enter the value of x:-");
    scanf("%d",&x);
    printf("Enter the value of y:-");
    scanf("%d",&y);

    z=x;
    x=y;
    y=z;

    printf("x:%d\ny:%d",x,y);
    getch();



}