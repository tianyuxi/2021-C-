#include<stdio.h>
int g_val = 2021;
int main()
{
	printf("1:%d\n", g_val);
	{
		printf("2:%d\n", g_val);
		int a = 10;
		printf("a = %d\n", a);
	}
	printf("3:%d\n", g_val);
	return 0;
}

