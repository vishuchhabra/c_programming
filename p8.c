#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
int n;
float x,y;
 printf("enter the two numbers");
    scanf("%f%f",&x,&y);
    system("cls");


while(1)
{

printf("1.for sum of the two number\n2.for subtraction of second from one\n3.for multiplication of the two numbers\n4.for  division of first number by second\n5.for exit from the program\n");
scanf("%d",&n);
system("cls");
switch(n)
{
case 1:

    printf("sum is %f",x+y);
    getch();
    system("cls");
    break;
case 2:
    printf("subtaction is %f",x-y);
    getch();
    system("cls");
    break;

case 3:
    printf("multiplication is %f",x*y);
    getch();
    system("cls");
    break;
case 4:
    printf("division is %f",x/y);
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
