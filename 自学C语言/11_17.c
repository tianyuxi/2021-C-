#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int a = 13;
//	a = a | (1 << 4);
//	printf("%d", a);
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	printf("%p", &a);
//}

//struct book//结构体
//{
//	//结构体成员
//	char name[20];
//	char id[20];
//	int price;
//};
//int main()
//{
	//结构体变量名.成员名
	//struct book b = { "c programmer langue", "2021", 10 };
	//printf("书名：%s\n",b.name);
	//printf("书号：%s\n", b.id);
	//printf("价格：%d\n", b.price);
	//struct book* pb = &b;

	//printf("书名：%s\n",(*pb).name);
	//printf("书号：%s\n", (*pb).id);
	//printf("价格：%d\n", (*pb).price);

	//printf("书名：%s\n", pb->name);
	//printf("书号：%s\n", pb->id);
	//printf("价格：%d\n", pb->price);//结构体指针->成员名
	//return 0;
//}

//int main()
//{
//	int* pa;
//	char* pb;
//	float* pf;
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pb));
//	printf("%d\n", sizeof(pf));
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = NULL;
//	if (p != NULL)
//		*p = 10;
//	int* ptr = &a;
//	return 0;
//}


//int main()//打印数组的数
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p <= pend)
//	{
//		printf("%d \n", *p);
//		p++;
//	}
//	return 0;
//
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d", &arr[9] - &arr[0]);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//
//}
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d", len);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;	
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr;
//	//int* p = arr;
//	//arr[2] == *(p + 2);
//	//*(2 + p) == *(arr + 2);
//	//*(arr + 2) == *(2 + arr);
//	printf("%d\n", 2[arr]);
//	printf("%d\n", arr[2]);
//	printf("%d\n", p[2]);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa是二级指针变量
//	int*** pppa = &ppa;
//}

int main()
{
	int arr[] = { 0 };
	char ch[5];
	int* parr[5];
	char* ch[5];
}