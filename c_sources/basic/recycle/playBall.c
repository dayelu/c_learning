#include<stdio.h>
int main(){
    int i = 0;   //�������
    for(i=1; i<=10; i++){
        printf("����%d��\n", i);
        if(i == 5){
            printf("��ѽ�������ˣ�������...\n");
            printf("ֹͣѵ��...");
            break;    //ʹ��break����ѭ��
        }
    }
    printf("�����ѵ�����˽�����");
    return 0;
}
