#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int y = 0;
	int count = 0;
	for (y = 1000; y <= 2000; y++)
	{
		//1.被4整除，不能被100整除是闰年
		//2.能被400整除是闰年
		if (y % 4 == 0)
		{
			if (y % 100 != 0)
			{
				printf("%d ", y);
				count++;
			}
		}
		if (y % 400 == 0)
		{
			printf("%d ", y);
			count++;
		}
	}
		printf("\n count = %d\n", count);
		return 0;
}

