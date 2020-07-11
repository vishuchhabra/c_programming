#include<stdio.h>
int main()
{

    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n==0)
        printf("no. is non negative and non positive");
    else if(n<0)
        printf("negative no.");

     else
     printf("positive no.");
     return 0;

}
