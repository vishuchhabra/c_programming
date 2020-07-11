#include<stdio.h>
void max(int n)
{
    int arr[n];
    printf("enter elements\n");
    scanf("%d",&arr[0]);
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
         scanf("%d",&arr[i]);
         if(arr[i]>max)
            max=arr[i];
    }
    printf("maximum element is %d ",max);


}
int main()
{

    int n;
    printf("enter the size");
    scanf("%d",&n);
    max(n);
    return 0;
}
