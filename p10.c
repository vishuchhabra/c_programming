#include<stdio.h>
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;


}
int main()
{
    int x,y;
    printf("enter x and y respectively\n");
    scanf("%d%d",&x,&y);
    swap(&x,&y);
    printf("after swaping x and y are %d ,%d",x,y);
    return 0;
}
