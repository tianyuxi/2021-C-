#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//ͳ�ƶ�������1�ĸ���
//дһ���������ز�����������1�ĸ���
//ect.  15      00001111   4��1
#include<stdio.h>
//int NumberOf1(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}


//int NumberOf1(int n)
//{
//	int count = 0;
//	int i = 1;
//	for (i = 1; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//���������������в�ͬλ�ĸ���
//���ʵ�֣�����int(32λ������m��n�Ķ����Ʊ��ʽ�У��ж��ٸ�λ��bit)��ͬ


//int NumberOf1(int n)
//{
//	int count = 0;
//	int i = 1;
//	while (n)
//	{
//		n =n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	/*int count = 0;*/
//	scanf("%d %d", &m, &n);
//	int ret = m ^ n;
//	int count = NumberOf1(ret);
//	printf("%d", count);
//	return 0;
//	//for (i = 0; i < 32; i++)
//	//{
//	//	if (((m >> i) & 1) != ((n >>i) & 1))
//	//		count++;
//	//}
//	//printf("%d",count);
//	//	return 0;
//}

//�ֱ��ӡ��������������λ��ż��λ
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int i = 0;
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	return 0;
//	
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//����С������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 0;
//	for (i = 1;; i++)
//	{
//		if (a * i % b == 0)
//		{
//			printf("%d", a*i);
//			break;
//		}
//	}
//	//int n = a > b ? a : b;
//	//while (1)
//	//{
//	//	if (n % a == 0 && n % b == 0)
//	//	{
//	//		printf("%d", n);
//	//		break;
//	//	}
//	//	n++;
//	//}
//	return 0;
//}

void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = 0;
		tmp = *left;
		*left = *right;
		*right = tmp;
		right--;
		left++;
	}
}

int main()
{
	char arr[100] = { 0 };
	gets(arr);
	int len = strlen(arr);
	reverse(arr,arr+len-1);
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' '&&*end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end == ' ')
			start = end + 1;
		else
			start = end;
	}
	printf("%s", arr);
	return 0;
}