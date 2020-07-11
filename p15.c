#include<);stdio.h>
#include<stdlib.h>

int main()
{
    int n,*ptr;
    printf("enter the size\n");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int)
    printf("enter the elements\n");
    for(int i=0;i<n;i++)
     scanf("%d",&ptr[i]);
    printf("elements are following as\n");
    for(int i=0;i<n;i++)
     printf("%d\n",ptr[i]);
     free(ptr);
    return 0;
}
