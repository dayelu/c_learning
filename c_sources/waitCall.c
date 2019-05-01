#include<stdio.h>
int main(){
    int i = 0;   //运球次数
    for(i=1; i<=10; i++){
        printf("运球%d次\n", i);
        if(i == 5){
            printf("去接个电话\n");
            continue;    //电话铃响了，去接电话
        }
    }
    printf("今天的训练到此结束。");
    return 0;
}
