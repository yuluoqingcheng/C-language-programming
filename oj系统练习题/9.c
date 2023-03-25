#include<stdio.h>
int main()
{
    int i,a[10];
    printf("请输入10个整数：");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);

    printf("正序输出：");
    for(i=0;i<=9;i++)
    printf("%d ",a[i]);
    printf('\n');

    printf("逆序输出：");
    for(i=9;i>=0;i--)
    printf("%d ",a[i]);
    printf('\n');
}