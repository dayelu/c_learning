#include<stdio.h>
int main(){
    int i = 0;   //运球次数
    for(i=1; i<=10; i++){
        printf("运球%d次\n", i);
        if(i == 5){
            printf("哎呀！！坏了！肚子疼...\n");
            printf("停止训练...");
            break;    //使用break跳出循环
        }
    }
    printf("今天的训练到此结束。");
    return 0;
}
