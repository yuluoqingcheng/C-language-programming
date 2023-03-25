#include<stdio.h>
#include<stdio.h>
int main(){
    int a , b , o;
    float sum;
    float money;
    printf("请输入苹果，香蕉，橘子的重量");
    scanf("%d%d%d,&a,&b,$o");
    sum = a * 3.5+b*2.6+o*1.8;
    printf("请输入你付款的钱数");
    scanf('%f',$money);
    if(money = sum){
        printf("无需找零，此次消费%f,欢迎下一次光临",sum);
}
    else if(money < sum){
        printf("付款钱数不足支付%f",sum)
    }
    else{
        printf("一共消费%0.3f元，找零为%f",sum,(money - sum));
    }