// Compare this snippet from 1111课堂文件/实验1.c:
//by雨落倾城 @yuluoqc for 2022-11-11 09-32-33 
//Vscode studio 
#include<stdio.h>
int main()
{
    int a[10],i,j,t;
    printf("请输入10个数:\n");
    for (i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("\n");
    for(i=0; i<10;i++)
    printf("%d ",a[i]);
    printf("\n");
    for(j=0;j<9;j++)
        for(i=0;i<10-j;i++)
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
    printf("排序后的数组为:\n");
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");
    printf("最大值为:%d）\n",a[9]);
    printf("最小值为:%d）\n",a[0]);
    return 0;
}
