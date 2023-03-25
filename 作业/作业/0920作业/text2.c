#include<stdio.h>
int main()
{float a,b,c;
printf("请输入两个证书a和b的值：");
scanf("%d%d%d,&a,&b");
if(a<b)
    c=a;
else
    c=b;
    printf("max=%d\n",c);
}