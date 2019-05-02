#include<stdio.h>
#include<stddef.h>	/*wchar_t类型定义在此头文件中 */
int main(){
wchar_t w_ch = L'A';
printf("%lc\n",w_ch);
printf("请输入一个wchar_t类型的字符：");
wchar_t wch;
scanf("%lc",&wch);
printf("您输入的字符为:%d\n",wch);
return 0;
}
