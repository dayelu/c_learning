#include <stdio.h>
int main()
{
    /* ������Ҫ��������� */
    int year = 2008;
    int month = 8;
    int day = 8;
    /*
     * ��ʹ��switch��䣬if...else�����ɱ���
     * ����2008��8��8����һ�죬�Ǹ����еĵڼ���
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
    printf("�Ǹ���ĵ�%d�졣\n",day);
         return 0;
}
