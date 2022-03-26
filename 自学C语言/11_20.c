#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int main()
//{
//	char arr1[10] = "xxxxxxxxx";
//	char arr2[] = "holle";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//char* my_strcpy(char* dest, const char* scr)
//{
//	assert(scr != NULL);//断言
//	assert(dest != NULL);
//	char* ret = dest;
//	while (*dest++ = *scr++)
//	{
//		;
//	}
//	return ret;//返回目标空间的起始地址
//}
//int main()
//{
//	char arr1[10] = "xxxxxxxxxxxxx";
//	char arr2[] = "holle";
//	//my_strcpy(arr1, arr2);
//	//printf("%s", arr1);
//	printf("%s", my_strcpy(arr1, arr2));//链式访问
//	return 0;
//}

//int main()
//{
//	int num = 10;//const修饰变量，这个变量就被成为常变量，不能被修改，但本质上还是变量
//	int* p = &num;//如果放在*的左边，修饰的是*p，表示指针指向的内容，是不能通过指针来修改的
//	*p = 20;
//	printf("%d", num);
//	return 0;
//}

size_t my_strlen(const char *str)
{
	size_t count = 0;
	assert(str != NULL);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "abc";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}