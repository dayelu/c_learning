#include <stdio.h>
int main()
{
	enum Weekday
	{
		Monday,
		Tuesday,
		Wednesday,
		Thursday,
		Friday,
		Staturday,
		Sunday
	};

	// enum Weekday			//定义枚举类型时声明变量类型
	// {
	// 	Monday,
	// 	Tuesday,
	// 	Wednesday,
	// 	Thursday,
	// 	Friday,
	// 	Staturday,
	// 	Sunday
	// } today,
	// 	tomorrow;
	// enum Weekday			//定义枚举类型时声明变量类型并初始化变量
	// {
	// 	Monday,
	// 	Tuesday,
	// 	Wednesday,
	// 	Thursday,
	// 	Friday,
	// 	Staturday,
	// 	Sunday
	// } today = Monday,
	//   tomorrow = Thursday;

	// enum Weekday
	// {
	// 	Monday,
	// 	Tuesday,
	// 	Wednesday,
	// 	Thursday,
	// 	Friday,
	// 	Staturday,
	// 	Sunday
	// } today = Monday,
	//   tomorrow = today + 1;

	enum Size
	{
		small = 1,
		midium,
		large
	};

	enum FirstQuarter
	{
		January,
		February = 2,
		March
	};

	enum //未命名的枚举类型
	{
		red,
		orange,
		white,
		yellow,
		green
	} shirt_color;

	enum Weekday today = Tuesday;
	enum Size size = midium;
	enum FirstQuarter month = January;
	enum FirstQuarter month_d = March;
	shirt_color = green;
	printf("%d\n", today);
	printf("%d\n", size);
	printf("%d\n", month);
	printf("%d\n", month_d);
	printf("%d\n", shirt_color);
}
