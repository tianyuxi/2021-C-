#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int input = 0;
	printf("在天津念书:>\n");
	printf("要好好学习吗？(1/0)?>:");
	scanf("%d", &input);
	if (input == 1)
		printf("拿到offer");
	else
		printf("回家卖红薯");
	return 0;
}