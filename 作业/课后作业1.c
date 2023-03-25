#include <stdio.h>
int main()
{
    int a,b,c;
    printf("ֵ请输入两个整数a和b的值:");
    scanf("%d%d",&a,&b);
    if (a>b)
        c=a;
    else
        c=b;
    printf("max=%d\n",c);
}