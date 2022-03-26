#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int count = 0;
	int i = 0;
	for (i = 100; i < 200; i++)
	{
		int j = 0;
		int flag = 1;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}