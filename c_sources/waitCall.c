#include<stdio.h>
int main(){
    int i = 0;   //�������
    for(i=1; i<=10; i++){
        printf("����%d��\n", i);
        if(i == 5){
            printf("ȥ�Ӹ��绰\n");
            continue;    //�绰�����ˣ�ȥ�ӵ绰
        }
    }
    printf("�����ѵ�����˽�����");
    return 0;
}
