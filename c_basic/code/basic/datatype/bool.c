#define TRUE 1 /*�궨��*/
#define FALSE 0
#include <stdio.h>
#include <stdbool.h> /* ��ͷ�ļ��н� _Bool ����Ϊ bool*/
int main()
{
    /* ����ö�������Զ��� */
    enum Bool
    {
        False,
        True
    };
    _Bool is_right = 1;
    bool is_false = 0;
    printf("%d\n", is_right);
    printf("%d\n", is_false);
    return 0;
}
