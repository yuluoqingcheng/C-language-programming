#include<sandbox.h>
int main(int argc, char *argv[])
{
    int i , sum ;
    i =1;
    for(;i<=100 ; sum = sum+i , i++);
    printf("sum = %d\n",sum);
    return 0;
}