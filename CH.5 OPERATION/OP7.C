#include<stdio.h>
#include<conio.h>

main()
{
   int x,y,z,sum;
   clrscr();
   printf("enter the value of x=");
   scanf("%d",&x);
   printf("enter the value of y=");
   scanf("%d",&y);
   printf("enter the value of z=");
   scanf("%d",&z);


   sum=x*x+2*x*y*z+y*y+z*z;
   printf("addition is=%d",sum);



   getch();



}