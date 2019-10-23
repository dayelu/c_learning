#include<stdio.h>

int which_day(unsigned int year, unsigned int month, unsigned int day)
{
	
	int wday = 0;
	int count = 0;
	int offset = (year%100) ? !(year % 4) : !(year%400);
	int feb = 28 + offset;
	int days = 365 + offset;

	switch (month)
	{
		case 1:if(day == 0 || day > 31)return 0;count+=31;
		case 2:if(day == 0 || day > feb)return 0;count+=feb;
		case 3:if(day == 0 || day > 31)return 0;count+=31;
		case 4:if(day == 0 || day > 30)return 0;count+=30;
		case 5:if(day == 0 || day > 31)return 0;count+=31;
		case 6:if(day == 0 || day > 30)return 0;count+=30;
		case 7:if(day == 0 || day > 31)return 0;count+=31;
		case 8:if(day == 0 || day > 31)return 0;count+=31;
		case 9:if(day == 0 || day > 30)return 0;count+=30;
		case 10:if(day == 0 || day > 31)return 0;count+=31;
		case 11:if(day == 0 || day > 30)return 0;count+=30;
		case 12:if(day == 0 || day > 31)return 0;count+=31;
			break;
		default:return 0;
	}

	wday = days - count + day;

	return wday;
}


int main()
{
	int res = which_day(2000, 2, 7);

	if(res)
		printf("%dth day\n", res);
	else
		printf("input error.\n");
	return 0;
}
