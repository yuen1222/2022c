#include <stdio.h>
int main()
{
    int a=10;
    printf("a���ȬO%d\n",a);
    printf("a���a�b%d\n",&a);
    int b=20;
    printf("b���ȬO%d\n",a);
    printf("b���a�b%d\n",&a);
    int c=30;
    printf("c���ȬO%d\n",a);
    printf("c���a�b%d\n",&a);
}
