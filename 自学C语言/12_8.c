#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//int main()
//{
//	int a = -1;
//	return 0;
//}

//1+(-1)
// 1��ԭ��00000000000000000000000000000001ԭ�뷴����ͬ
//-1��ԭ��10000000000000000000000000000001
//  �͡���10000000000000000000000000000010   -2
// 
// 
// 1�Ĳ���00000000000000000000000000000001
//-1�Ĳ���11111111111111111111111111111111
// -1�Ĳ���0000000000000000000000000000000

//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("С���ֽ���");
//	}
//	else
//	{
//		printf("����ֽ���");
//	}
//	return 0;
//}

//int check_sys()
//{
//	int n = 0;
//	char* p = (char*)&n;
//	if (*p == 1)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (ret = 1)
//	{
//		printf("С���ֽ���");
//	}
//	else
//	{
//		printf("����ֽ���");
//	}
//	return 0;
//}

//int main()
//{
//	int a[] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//
//	int* arr[] = { a,b,c };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a;
//	int* pa = &a;
//
//	char b;
//	char* pb = &b;
//	
//	int arr[5] = { 1,2,3,4,5 };
//	int(*parr)[5] = &arr;//parr����һ������ָ�룬���д�ŵľ�������ĵ�ַ
//
//	double  d[5] = { 1,2,3,4,5 };
//	double (*pd)[5] = &d;
//}

//void print(int arr[3][4],int row,int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*p)[4], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
//	print2(arr,3,4);
//	return 0;
//}

//��a+aa+aaa+aaaa+aaaaa��ǰ�����

//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum = sum * 10 + a;
//		ret = sum + ret;
//	}
//	printf("%d", ret);
//	return 0;
//}

//дһ��������ӡarr��������ݣ������������±꣬ʹ��ָ�롣
//arr��һ������6һά����

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", *(p + i));
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* pend = sz + arr - 1;
//	while (p <= pend)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//���1-100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ǡ�õ��ڸ�������
//��153=1^3+5^3+3^3,��153����һ����ˮ�ɻ�����

//int main()
//{
//	
//	int i = 0;
//	for (i = 0; i <= 100000; i ++ )
//	{
//		int n = 1;
//		int tmp = i;
//		while (tmp/10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}//������λ��
//
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);//pow��η���
//			tmp = tmp / 10;
//		}//
//
//		if (sum == i)
//		printf("%d\n", i);
//	}
//	return 0;
//}
#include<string.h>

//void reversr(char * str)
//{
//	//assert(str != NULL);
//	int len = strlen(str);
//	char* right = len + str - 1;
//	char *left = str;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		right++;
//		left--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	reversr(arr);
//	printf("%s", arr);
//	return 0;
//}


//int main()//����ˮ
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//	//�û�
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty % 2 + empty / 2;
//	}
//	printf("%d", total);
//	return 0;
//}

//дһ��������ʵ��һ�������е�����������ǰ�벿�֣�ż�������ں�벿��
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		while ((left<right) && arr[left] % 2 == 1)//��ǰ������һ��ż��
//		{
//			left++;
//		}
//		while ((left<right) && arr[right]%2 == 0)//�Ӻ���ǰ��һ������
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//	return 0;
//}

//         1
//       1   1
//    1   2   1
//  1   3   3   1
//1   4   6   4   1

//1 
//1  1
//1  2  1
//1  3  3  1
//1  4  6  1
//1  5  10  10  1
int main()
{
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)//��ӡʮ��
	{
		for (j = 0; j <= i; j++)//��
		{
			if (j == 0)//��һ��Ϊ0
			{
				arr[i][j] = 1;
			}
			if (i == j)//�Խ���Ϊ1
			{
				arr[i][j] = 1;
			}
			if (i >= 2 && j >= 1)
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

int main()
{
	int line = 0;
	scanf("%d", &line);
	int i = 0;
	for (i = 0; i < line; i++)
	{
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)//ÿ������ӡһ��
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
			printf("*");
		printf("\n");
	}

	for (i = 0; i <= line-1; i++)
	{
		int j = 0;
		for (j = 0; j <=i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2*(line-1-i)-1; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}	/**
	 ***
	*****
   *******
  *********
 ***********
*************
 ***********
  *********
   *******
	*****
	 ***
	  * */
