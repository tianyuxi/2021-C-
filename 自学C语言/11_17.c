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

//struct book//�ṹ��
//{
//	//�ṹ���Ա
//	char name[20];
//	char id[20];
//	int price;
//};
//int main()
//{
	//�ṹ�������.��Ա��
	//struct book b = { "c programmer langue", "2021", 10 };
	//printf("������%s\n",b.name);
	//printf("��ţ�%s\n", b.id);
	//printf("�۸�%d\n", b.price);
	//struct book* pb = &b;

	//printf("������%s\n",(*pb).name);
	//printf("��ţ�%s\n", (*pb).id);
	//printf("�۸�%d\n", (*pb).price);

	//printf("������%s\n", pb->name);
	//printf("��ţ�%s\n", pb->id);
	//printf("�۸�%d\n", pb->price);//�ṹ��ָ��->��Ա��
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


//int main()//��ӡ�������
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
//	int** ppa = &pa;//ppa�Ƕ���ָ�����
//	int*** pppa = &ppa;
//}

int main()
{
	int arr[] = { 0 };
	char ch[5];
	int* parr[5];
	char* ch[5];
}