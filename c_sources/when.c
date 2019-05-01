#include <stdio.h>
int main()
{
    /* 定义需要计算的日期 */
    int year = 2008;
    int month = 8;
    int day = 8;
    /*
     * 请使用switch语句，if...else语句完成本题
     * 计算2008年8月8日这一天，是该年中的第几天
     */
    switch(month-1){
        case 11: day +=30;
        case 10: day +=31;
        case 9: day +=30;
        case 8: day +=31;
        case 7: day +=31;
        case 6: day +=30;
        case 5: day +=31;
        case 4: day +=30;
        case 3: day +=31;
        case 2:
            if((year%4==0&&year%100!=0) || year%400==0){
                day += 29;
            }else{
                day += 28;
            }
        case 1: day +=31; break;
    }
    printf("是该年的第%d天。\n",day);
         return 0;
}
