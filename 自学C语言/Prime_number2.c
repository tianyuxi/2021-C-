#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//��ӡ100��200֮�������
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		//�ж�i�Ƿ�Ϊ����
		//2��i-1֮�������ȥ�Գ�i
		int j = 0;
		int flag = 1;//����i��������
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 0;//��������
				break;
			}
		}
		if (flag == 1)
		{
			count++;
			printf("%d ", i);//����
		}
	} 
	printf("\ncount = %d\n", count);
	return 0;
}