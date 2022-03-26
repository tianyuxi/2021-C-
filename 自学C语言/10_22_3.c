#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int m = 1;
	int sum = 0;
	scanf("%d", &n);
	for(n = 1; n <= 10; n++)
		for (i = 1; i <= n; i++)
		{
			m *= i;
		}
	sum += m;
	printf("%d\n", sum);
	return 0;
}  

