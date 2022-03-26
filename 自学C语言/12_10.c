#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)//穷举
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1)
//							&& ((b == 2) + (e == 4) == 1)
//							&& ((c == 1) + (d == 2) == 1)
//							&& ((c == 5) + (d == 3) == 1)
//							&& ((e == 4) + (a == 1) == 1))
//						{
//							if (a * b * c * d * e == 120)
//							{
//								printf("a=%d b=%d c=%d d=%d e=%d", a, b, c, d, e);
//								printf("\n");
//							}
//							
//						}
//						
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//void print(int* ptr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", *(ptr + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	print(p, sz);
//	return 0;
//}

//void test(int** p2)
//{
//	**p2 = 20;
//}
//int main()
//{
//	int a = 0;
//	int* pa = &a;//一级指针
//	int** ppa = &pa;//二级指针
//	test(ppa);
//	printf("%d", a);
//
//}
//void test(char* str)
//{
//
//}
//int main()
//{
//	void(*pt)(char*) = &test;
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*pt)(int, int) = &Add;
//	int ret = (*pt)(3, 5);
//	int ret2 = pt(3, 5);
//	int ret3 = Add(33, 55);
//	printf("%d %d", ret,ret2);
//	return 0;
//}
typedef void(*pfun_t)(int);//对void(*)(int)的函数指针类型重命名为pfun_t