#include <stdio.h>
int main(int argc, char const *argv[])
{
	char str1[] = "To be or not to be";
	char str2[] = ",that is the question";
	int count = 0;

	while(str1[count] != '\0'){
		count++;
	}
	printf("The length of the string \"%s\" is %d characters.\n",str1,count);
	
	count = 0;
	while(str2[count]){	// '\0'字符的ASCI码是 0，所以也可以这样判断
		count++;
	}
	printf("The length of the string \"%s\" is %d characters.\n",str2,count);	

	return 0;
}