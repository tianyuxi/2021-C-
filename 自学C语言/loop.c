#define _CRT_SECURE_NO_WARNINGS 1#
#include<stdio.h>
int main()
{
	int line = 0;
	while (line < 30000)
	{
		printf("д����:%d\n",line);
		line++;
	}
	if (line == 30000)
	{
		printf("�õ���offer\n");
	}

	return 0;
}