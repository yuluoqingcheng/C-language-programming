#include <stdint.h>
int main()
{ int a[10],i,j,k,t;
    printf("请输入10个数:\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0 ; i<10 ;i++)
    {
        k=i;
        for(j=i+1;j<10;j++)
            if(a[k]<a[j])
                k=j;
        if(k!=i)
        {
            t=a[i];
            a[i]=a[k];
            a[k]=t;
        }
        printf("排序后：");
        for(i=0;i<10;i++)
            printf("%d ",a[i]);
        printf("\n");  
         }