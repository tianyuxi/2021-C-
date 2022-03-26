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

int Cacl(int (*pf)(int, int))//函数回调
{
	int x = 0;
	int y = 0;
	printf("请输入两个操作数");
	scanf("%d %d", &x, &y);
	return pf(x, y);
}
//int main()
//{
//	int input = 0;
//	do {
//		menu();
//		int ret = 0;
//		printf("请选择\n");
//		scanf("%d", &input);
//		int a, b;
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数\n");
//			scanf("%d %d", &a, &b);
//			ret = Add(a, b);
//			printf("ret= %d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个操作数\n");
//			ret = Sub(a, b);
//			printf("ret= %d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个操作数\n");
//			ret = Mul(a, b);
//			printf("ret= %d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个操作数\n");
//			ret = Div(a, b);
//			printf("ret= %d\n", ret);
//			break;
//		case 0:
//			printf("推出程序\n");
//			break;
//		default:
//			printf("选择错误，请重新选择");
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
//		int (*pfArr[5])(int, int) = { NULL,Add,Sub,Mul,Div };//函数指针的应用
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		printf("请选择：>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数");
//			scanf("%d %d", &x, &y);
//			ret = (pfArr[input])(x, y);
//			printf("ret = %d\n", ret);
//		}
//		else if(input == 0)
//		{
//			printf("退出程序\n");
//		}
//		else
//		{
//			printf("选择错误");
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
		printf("请选择\n");
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
			printf("推出程序\n");
			break;
		default:
			printf("选择错误，请重新选择");
			break;

		}
	} while (input);
	return 0;
}
