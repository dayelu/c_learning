#include<stdio.h>
#include<stddef.h>	/*wchar_t���Ͷ����ڴ�ͷ�ļ��� */
int main(){
wchar_t w_ch = L'A';
printf("%lc\n",w_ch);
printf("������һ��wchar_t���͵��ַ���");
wchar_t wch;
scanf("%lc",&wch);
printf("��������ַ�Ϊ:%d\n",wch);
return 0;
}
