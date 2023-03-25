#include <stdio.h>
int main (int argc,char * argv[])
{
    int a[11],i,j,t;
    printf("请输入10个数:\n");
    for (i=1;i<11;i++)
        scanf("%d",&a[i]);
    printf("\n");
    for(i=1; i<=10;i++)
    printf("%d ",a[i]);
    printf("\n");
    for(j=1;j<=9;j++)
        for(i=1;i<=10-j;i++)
            if(a[i]<a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
}