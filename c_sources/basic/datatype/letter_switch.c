#include<stdio.h>
int main(){
char ch;
printf("������һ����д��ĸ:");
scanf("%c",&ch);
while(!(ch >= 'A' && ch <= 'Z')){
printf("���������������������룺");
scanf("%c",&ch);
}

char big_letter = 'a' - 'A' + ch;

printf("%c\n",big_letter);
return 0;
}
