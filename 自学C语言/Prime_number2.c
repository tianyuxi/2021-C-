#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//打印100～200之间的素数
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		//判断i是否为素数
		//2到i-1之间的数字去试除i
		int j = 0;
		int flag = 1;//假设i就是素数
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 0;//不是素数
				break;
			}
		}
		if (flag == 1)
		{
			count++;
			printf("%d ", i);//素数
		}
	} 
	printf("\ncount = %d\n", count);
	return 0;
}