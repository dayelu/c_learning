#include<stdio.h>
int main(){
printf("char �ĳ����ǣ�%ld\n",sizeof(char));
printf("short �ĳ����ǣ�%ld\n",sizeof(short));
printf("int �ĳ����ǣ�%ld\n",sizeof(int));
printf("long �ĳ����ǣ�%ld\n",sizeof(long));
printf("long long �ĳ����ǣ�%ld\n",sizeof(long long));
printf("float �ĳ����ǣ�%ld\n",sizeof(float));
printf("double �ĳ�����:%ld\n",sizeof(double));

printf("һ�����������Ĭ�ϳ����ǣ�%ld\n",sizeof(1213));
printf("һ�����С����Ĭ�ϳ����ǣ�%ld\n",sizeof(123.12));
return 0;
}
