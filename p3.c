#include<stdio.h>
int fact( int n)
{

    if(n>1)
        return (n*fact(n-1));
    else
        return 1;

}
int main()
{

    int x;
    printf("enter the no.");
    scanf("%d",&x);
    printf("factorial is %d",fact(x));
    return 0;
}
