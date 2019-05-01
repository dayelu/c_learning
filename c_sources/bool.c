#define TRUE 1 /*宏定义*/
#define FALSE 0
#include <stdio.h>
#include <stdbool.h> /* 此头文件中将 _Bool 定义为 bool*/
int main()
{
    /* 利用枚举类型自定义 */
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
