#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void menu()
{
	printf("**********************\n");
	printf("**** 1.add  2.sub ****\n");
	printf("**** 3.mul  4.div ****\n");
	printf("******** 0.exit ******\n");
	printf("**********************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

int Cacl(int (*pf)(int, int))//�����ص�
{
	int x = 0;
	int y = 0;
	printf("����������������");
	scanf("%d %d", &x, &y);
	return pf(x, y);
}
//int main()
//{
//	int input = 0;
//	do {
//		menu();
//		int ret = 0;
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//		int a, b;
//		switch (input)
//		{
//		case 1:
//			printf("����������������\n");
//			scanf("%d %d", &a, &b);
//			ret = Add(a, b);
//			printf("ret= %d\n", ret);
//			break;
//		case 2:
//			printf("����������������\n");
//			ret = Sub(a, b);
//			printf("ret= %d\n", ret);
//			break;
//		case 3:
//			printf("����������������\n");
//			ret = Mul(a, b);
//			printf("ret= %d\n", ret);
//			break;
//		case 4:
//			printf("����������������\n");
//			ret = Div(a, b);
//			printf("ret= %d\n", ret);
//			break;
//		case 0:
//			printf("�Ƴ�����\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��");
//			break;
//
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	do {
//		menu();
//		int (*pfArr[5])(int, int) = { NULL,Add,Sub,Mul,Div };//����ָ���Ӧ��
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("����������������");
//			scanf("%d %d", &x, &y);
//			ret = (pfArr[input])(x, y);
//			printf("ret = %d\n", ret);
//		}
//		else if(input == 0)
//		{
//			printf("�˳�����\n");
//		}
//		else
//		{
//			printf("ѡ�����");
//		}
//
//	} while(input);
//}

int main()
{
	int input = 0;
	do {
		menu();
		int ret = 0;
		printf("��ѡ��\n");
		scanf("%d", &input);
		int a = 0;
		int b = 0;
		switch (input)
		{
		case 1:
			ret = Cacl(Add);
			printf("ret= %d\n", ret);
			break;
		case 2:
			ret = Cacl(Sub);
			printf("ret= %d\n", ret);
			break;
		case 3:
			ret = Cacl(Mul);
			printf("ret= %d\n", ret);
			break;
		case 4:
			ret = Cacl(Div);
			printf("ret= %d\n", ret);
			break;
		case 0:
			printf("�Ƴ�����\n");
			break;
		default:
			printf("ѡ�����������ѡ��");
			break;

		}
	} while (input);
	return 0;
}
