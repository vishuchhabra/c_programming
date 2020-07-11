#include<stdio.h>
void  check_static()
{

    static int x;
    x++;
    printf("value of func S.V. is %d\n",x);

}
int main()
{
    static int x;
    printf("value of main S.V.  is %d\n",x);
    check_static();
    check_static();
    return 0;
}
