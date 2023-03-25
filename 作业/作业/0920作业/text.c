#include<stdio.h>
void main()
{
    char x="a";
    printf("请您输入任意大写字母或者小写字母x:\n");
    scanf("%c",&x);
    if(x>='A' && x<="z")
    {
        x=x+32;
    }
    else
    if(x>="a" && x<='z')
    {
        x=x-32;
    }
    printf("%c\n",x);
}