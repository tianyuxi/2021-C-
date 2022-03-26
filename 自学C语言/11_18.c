#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//struct Stu
//{
//	//成员变量
//	struct B sb;
//	char name[20];
//	int age;
//	char id[20];
//}s1, s2;//全局变量

//int main()
//{
//	struct Stu s = { {'w',20,3.14},"张三",30,202103040118 };//局部变量
//	//结构体成员访问
//	//printf("%c\n", s.sb.c);
//	//printf("%d\n", s.sb.s);
//	//printf("%f\n", s.sb.d);
//	//printf("%s\n", s.name);
//	//printf("%d\n", s.age);
//	struct Stu* ps = &s;
//	printf("%c\n",(*ps).sb .c );
//	printf("%d\n", (*ps).sb.s);
//	printf("%f\n", (*ps).sb.d);
//	printf("%c\n", ps->sb.c);
//	printf("%d\n", ps->sb.s);
//	return 0;
//}



//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//struct Stu
//{
//	//成员变量
//	struct B sb;
//	char name[20];
//	int age;
//	char id[20];
//};
//
//void print1(struct Stu t)//传值调用
//{
//	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
//}
//
//void print2(struct Stu* ps)//传址调用
//{
//	printf("%c %d %lf %s %d %s\n", ps->sb.c, (*ps).sb.s, ps->sb.d, (*ps).name, ps->age, (*ps).id);
//}
//int main()
//{
//	struct Stu s = { {'w',20,3.14},"张三",30,202103040118 };//局部变量
//	print1(s);
//	print2(&s);
//	return 0;
//}

//int Add(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	c = Add(a, b);
//	printf("%d", c);
//	return 0;
//
//}

int main()
{
	int arr[10] = { 0 };
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = i + 1;
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}