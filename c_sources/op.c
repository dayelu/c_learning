#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num = 9;
    int ten = 10;
    num /= 3;
    printf("num /= 3 运算之后 = %d\n", num);
    num *= 3;
    printf("num *= 3 运算之后 = %d\n", num);
    num %= 3;
    printf("num %%= 3 运算之后 = %d\n", num);
    ten <<= 3;
    printf("ten <<= 3 运算之后 = %d\n", ten);
    ten >>= 3;
    printf("ten >>= 3 运算之后 = %d\n", ten);
    ten &= 3;
    printf("ten &= 3 运算之后 = %d\n", ten);
    ten ^= 3;
    printf("ten ^= 3 运算之后 = %d\n", ten);
    ten |= 3;
    printf("ten |= 3 运算之后 = %d\n", ten);
    return 0;
}
