#include<stdio.h>
int main(){
printf("char 的长度是：%ld\n",sizeof(char));
printf("short 的长度是：%ld\n",sizeof(short));
printf("int 的长度是：%ld\n",sizeof(int));
printf("long 的长度是：%ld\n",sizeof(long));
printf("long long 的长度是：%ld\n",sizeof(long long));
printf("float 的长度是：%ld\n",sizeof(float));
printf("double 的长度是:%ld\n",sizeof(double));

printf("一个随机整数的默认长度是：%ld\n",sizeof(1213));
printf("一个随机小数的默认长度是：%ld\n",sizeof(123.12));
return 0;
}
