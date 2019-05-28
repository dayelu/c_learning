#include<stdio.h>
/* 定义全局变量x */
int x = 1;
int func(int x){
    /* 函数中的x,y均为局部变量 */
    int y,z;
    z = 2;
    y = x+z;
    printf("y=%d\n", y);
    return 0;
}

int main(){
    func(2);
    int y = 10; // 定义局部变量y
    printf("x+y=%d\n", y+x);
    return 0;
}
