#include<stdio.h>
int main(){
char ch;
printf("请输入一个大写字母:");
scanf("%c",&ch);
while(!(ch >= 'A' && ch <= 'Z')){
printf("您的输入有误，请重新输入：");
scanf("%c",&ch);
}

char big_letter = 'a' - 'A' + ch;

printf("%c\n",big_letter);
return 0;
}
