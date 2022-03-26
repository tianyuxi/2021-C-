#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//100以内包括9的数字
//int main()
//{
//	int n = 0;
//	int count = 0;
//	for (n = 1; n <= 100; n++)
//	{
//		if (n % 10 == 9)
//			count++;
//		if (n / 10 == 9)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}


//1+1/2-3/1+4/1
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//			sum -= 1.0 / i;
//		else
//			sum += 1.0 / i;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}



//优化
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//求数组内最大值
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d", max);
//	return 0;
//}


//在屏幕上输出乘法口诀表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-2d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}


//void my_string()
//{
//
//}
//
//
//
//
//void reverse_string(char*str)
//{
//	int left = 0;
//	int right = strlen(str) - 1;
//
//	while (left < right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//写一个递归函数DigitSum(n),输入一个非负整数，
//返回组成它的数字之和

//int DigitSum(int n)
//{
//	if (n > 9)
//		return DigitSum(n/10)+n%10;
//	else
//		return n;
//}
//
//int main()
//{
//	int num = 1729;
//	int sum = DigitSum(num);
//	printf("%d\n", sum);
//	return 0;
//}

//编写一个函数实现n的k次方，使用递归实现

//double Pow(int n,int k)
//{
//	if (k == 0)
//		return 1.0;
//	else if (k > 0)
//		return n * Pow(n, k - 1);
//	else
//		return 1.0 / (Pow(n, -k));
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}


//完全初始化
//int arr[5] = { 1,2,3,4,5 };
//不完全初始化
//int arr[5] = { 1,2,3 };

int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr4[5] = { 1,2,3,4,5 };
	char ch5[5] = { 'a','b','c' };
	char ch2[5] = "bit";
	char ch3[] = "bit";
	printf("%d", arr1);
	return 0;
}
