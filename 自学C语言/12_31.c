#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for(j = 2;j <= sqrt(n);j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d",count);
//	return 0;
//}

int main()
{
    int* p = (int*)malloc(10 * sizeof(int));
    int i = 10;
    if (p == NULL)
    {
        perror("main");
        return 0;
    }
    for(i = 0;i < 10;i++)
    {
        *(p + i) = i;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", p[i]);
    }
    free(p);
    p = NULL;
    return 0;
}