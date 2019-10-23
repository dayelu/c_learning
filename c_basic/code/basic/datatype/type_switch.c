#include<stdio.h>
int main(){
int a = 189;
float b = 89.391f;
int c = a + (int)b;
int d = a + b;
printf("c = %d\n",c);
printf("d = %d\n",d);
printf("a + b  = %d\n",(a+b));
printf("a + b  = %f\n",a+b);
return 0;
}
