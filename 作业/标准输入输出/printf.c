#include <stdio.h>
int main(int argc,char * argv[])
{
    int i,chj;
    char c;
    while(1)
    {
        i=3;
        chj=95;
        printf("请输入学生名:");
        c=getchar();
        printf("%c的成员成绩是%d\n",c,chj);
        getchar();
    }
    return 0;
}

/*
scanf("格式控制字符串"，参数表);
例如：scanf("%d,%d,%d",&a,&b,&c);
? ? ? ? ? ? ?格式控制 ? 参数表
? ? ? ? ? ? 该符号规范
? ? ? ? ? ? 输入时的间
? ? ? ? ? ? 隔符号
使用scand应该注意的问题：
（1）参数表中至少包含一个输入项，且必须是变量的地址，
? ? 多个输入项之间用逗号隔开
（2）“&”为地址运算符，&a之变量a在内存中的地址
*/