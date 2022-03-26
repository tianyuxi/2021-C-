#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
//int main()
//{
//	int n = 0;
//	int amax = 0;
//	int amin = 0;
//	int ai = 0;
//	int a = 0;
//	scanf("%d", &n);
//	scanf("%d %d %d", &n,&a,&ai);
//	ai = ((ai - amin) / (amax - amin)) * 100;
//	printf("%d %d %d",)
//}

//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//			return 0;
//		*s1++;
//		*s2++;
//	}
//	return *s1-*s2;
//}
//int main()
//{
//	const char* q = "abb";
//	const char* p = "abb";
//	int ret = my_strcmp(q, p);
//	if (ret > 0)
//	{
//		printf("q>p\n");
//	}
//	else if (ret < 0)
//	{
//		printf("q<p\n");
//	}
//	else
//	{
//		printf("p==q");
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "qwer";
//	//strncpy(arr1, arr2, 2);
//	strncat(arr1, arr2, 2);
//	printf("%s", arr1);
//	return 0;
//}
//char* my_strstr(char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	const char* cp = str1;
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (str1 && str2 && str1 == str2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	char arr2[] = "abc";
//	char* ret = my_strstr(arr, arr2);
//	if (ret == NULL)
//		printf("没找到");
//	else
//		printf("找到了:%s\n", ret);
//	return 0;
//}

//int main()
//{
//	char arr[] = "879839094@qq.com";
//	char const * p = "@.";
//	char tmp[20] = { 0 };
//	strcpy(tmp,arr);
//	char*  ret1 = strtok(tmp, p);
//	printf("%s\n", ret1);
//	char* ret2 = strtok(NULL, p);
//	printf("%s\n", ret2);
//	char* ret3 = strtok(NULL, p);
//	printf("%s\n", ret3);
//	return 0;
//}

//int main()
//{
//	char arr[] = "879839094@qq.com";
//	char const* p = "@.";
//	char tmp[20] = { 0 };
//	strcpy(tmp, arr);
//	for (char* ret = strtok(tmp, p); ret != NULL;ret= strtok(NULL,p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}
int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	fclose(pf);
	pf = NULL;

}