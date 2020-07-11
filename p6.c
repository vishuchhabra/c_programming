#include<stdio.h>
int main()
{

    int arr[5];
    printf("enter the elements");
    for(int n=0;n<5;n++)
        scanf("%d",&arr[n]);
    printf("elements are following as\n");
      for(int n=0;n<5;n++)
        printf("%d\t",arr[n]);
      return 0;

}
