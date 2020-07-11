#include<stdio.h>
int main()
{

    int x,y;
    printf("enter x and y repectively\n");
    scanf("%d%d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("value of x and y are respectively %d and %d",x,y);
    return 0;
}
