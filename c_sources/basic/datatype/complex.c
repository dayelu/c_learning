#include<stdio.h>
#include<complex.h>         /* ���帴���йز����ͷ��� */
int main(int argc, char const *argv[])
{
    double complex z1 = 2.0 + 3.0*I;  // <complex.h> ͷ�ļ���I����Ϊ�ȼ���_Complex_I
    printf("����complex��ʵ�����֣�%f,�������֣�%f\n",creal(z1),cimag(z1));
    return 0;
}
