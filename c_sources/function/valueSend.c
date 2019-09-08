#include <stdio.h>

float average(float,float);
char greet_morning(char *);

float greet_night(char *name)
{
	printf("Hello,good night,%s\n",name);
	return 0.3f;
}

int main(int argc, char const *argv[])
{

	char name[] = "dayelu";
	greet_morning(name);
	float x_r = 8.0f;
	float y_r = 14.0f;

	float ave = average(x_r,y_r);

	printf("average = %f\n", ave);
	printf("x_r = %f\n", x_r);
	printf("y_r = %f\n", y_r);
	greet_evening(name);
	greet_night(name);
	return;
}

char greet_morning(char *name)
{
	printf("Hello,good morning,%s\n",name);
	return '+';
}

int greet_evening(char *name)
{
	printf("Hello,good evening,%s\n",name);
	return;
}

float average(float x,float y)
{
    x++;
    ++y;
    printf("x = %f\n", x);
	printf("y = %f\n", y);
    return (x + y) / 2.0f;
}