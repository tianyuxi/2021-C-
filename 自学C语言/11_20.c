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
//	assert(scr != NULL);//����
//	assert(dest != NULL);
//	char* ret = dest;
//	while (*dest++ = *scr++)
//	{
//		;
//	}
//	return ret;//����Ŀ��ռ����ʼ��ַ
//}
//int main()
//{
//	char arr1[10] = "xxxxxxxxxxxxx";
//	char arr2[] = "holle";
//	//my_strcpy(arr1, arr2);
//	//printf("%s", arr1);
//	printf("%s", my_strcpy(arr1, arr2));//��ʽ����
//	return 0;
//}

//int main()
//{
//	int num = 10;//const���α�������������ͱ���Ϊ�����������ܱ��޸ģ��������ϻ��Ǳ���
//	int* p = &num;//�������*����ߣ����ε���*p����ʾָ��ָ������ݣ��ǲ���ͨ��ָ�����޸ĵ�
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