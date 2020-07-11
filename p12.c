#include<stdio.h>
int main()
{
    printf("enter size");
    int n;
    scanf("%d",&n);
    int arr[n];
    int *ptr=arr;
    printf("enter elements\n");
    for(int i=0;i<n;i++)
    scanf("%d",&ptr[i]);
    printf("your elements are following as:-\n");
    for(int j=0;j<n;j++)
    printf("%d\n",ptr[j]);
    return 0;
}
