#include<stdio.h>
int main()
{

    int x,*p,**q;
    x=5;
    p=&x;
    q=&p;
    printf("value by diff. methods are following as:\n");
    printf("value are :%d,%d and %d resp.",x,*p,**q);
    printf("\naddress of first pointer and x is  resp %d and %d",q,*q);
    return 0;
}
