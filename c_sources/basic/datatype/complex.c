#include<stdio.h>
#include<complex.h>         /* 定义复数有关参数和方法 */
int main(int argc, char const *argv[])
{
    double complex z1 = 2.0 + 3.0*I;  // <complex.h> 头文件把I定义为等价于_Complex_I
    printf("复数complex的实数部分：%f,虚数部分：%f\n",creal(z1),cimag(z1));
    return 0;
}
