#include<stdio.h>
int isprime(int x)
{

    if(x<2)
        return 2;
    else if(x==2)
        return 1;
    else
    {

        for(int n=2;n<=x/2;n++)
        {

            if(x%n==0)
                return 0;
        }
        return 1
        ;
    }
}
int main()
{

    int n;
    printf("enter the no.\n");
    scanf("%d",&n);
    if(isprime(n)==1)
       printf("no. is prime");
    else if(isprime(n)==2)
        printf("please enter the valid no.");
    else
        printf("no.is not prime ");
    return 0;
}
