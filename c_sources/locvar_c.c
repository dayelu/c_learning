#include<stdio.h>
/* ����ȫ�ֱ���x */
int x = 1;
int func(int x){
    /* �����е�x,y��Ϊ�ֲ����� */
    int y,z;
    z = 2;
    y = x+z;
    printf("y=%d\n", y);
    return 0;
}

int main(){
    func(2);
    int y = 10; // ����ֲ�����y
    printf("x+y=%d\n", y+x);
    return 0;
}
