#include<stdio.h>
int main(){
    // 需计算的年份
    int year = 2008;
    // 需计算的月份
    int month = 8;
    // 需计算的日
    int day= 8;
    // 定义总天数和判断是否是闰年的状态位
    int sum, flag;
    // 使用switch语句计算月数的天数
    switch(month){
        case 1 : sum = 0;break;
        case 2 : sum = 31; break;
        case 3 : sum = 59; break;
        case 4 : sum = 90; break;
        case 5 : sum = 120; break;
        case 6 : sum = 151; break;
        case 7 : sum = 181; break;
        case 8 : sum = 212; break;
        case 9 : sum = 243; break;
        case 10: sum = 273; break;
        case 11: sum = 304; break;
        case 12: sum = 334; break;
        default:
            printf("一年当中只有12个月！");break;
    }
    //计算天数
    sum = sum + day;
    //当该年为瑞年时，将状态位设置为1，否则为0
    if(year%400 == 0 || (year%4 == 0 && year%100 != 0)){
        flag = 1;
    }else{
        flag = 1;
    }
    //当需计算的日期是闰年并且计算的月份大于2月时，计算的天数自动加1
    if(flag==1 && month>2){
        sum++;
    }
    printf("%d年%d月%d日时该年的第%d天。\n",year,month,day,sum);
    return 0;
}
