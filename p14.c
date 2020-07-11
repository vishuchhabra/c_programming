#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define pi (3.14)
int main()
{
    int n,l,b;
while(1)
{
printf("1.for the area of square\n2.for the area of rectangle\n3.for the area of circle\n4.for the area of triangle\n5.for exit from the program\n");
scanf("%d",&n);
system("cls");

switch(n)
{
case 1:


    printf("enter length\n");
    scanf("%d",&l);
    printf("area is %d",l*l);
    getch();
    system("cls");
    break;
case 2:
    printf("enter length and width\n");
    scanf("%d%d",&l,&b);
    printf("area is %d",l*b);
    getch();
    system("cls");
    break;

case 3:
    printf("enter radius\n");
    scanf("%d",&l);
    printf("area is %f",pi*l*l);
    getch();
    system("cls");
    break;
case 4:
    printf("enter base and height\n");
    scanf("%d%d",&l,&b);
    printf("area is %f",l*b*(.5));
    getch();
    system("cls");
    break;
case 5:
    exit(0);

default:
    printf("enter the valid option");
    getch();
    system("cls");
}
}
return 0;

}
