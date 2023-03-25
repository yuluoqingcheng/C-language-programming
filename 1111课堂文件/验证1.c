#include <stdio.h>
int main()
{
    int a[11];
    int i,j,t;
    printf("请输入10个整数:\n");
    for(i=1;i<=11;i++)
        scanf("%d",&a[i]);
        printf("\n");
    for(i=1;i<=9;i++)
        for(j=1;j<=10-i;j++)
            if(a[j]<a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        printf("排序后的顺序为:\n");
    for(i=1;i<=11;i++)
        printf("%d ",a[i]);
}