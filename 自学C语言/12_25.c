#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//�ַ�����
//void string_rotate(char* str, int k)
//{
//	int n = strlen(str);
//	int i = 0;
//	for (i = 0; i < k; i++)//ÿ������һ���ַ�
//	{
//		char tmp = *str;
//		int j = 0;
//		for (j = 0; j < n - 1; j++)//����n-1���ַ�����ǰŲ��
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		*(str + n - 1) = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "ABCDEF";
//	int k = 2;
//	string_rotate(arr, k);
//	printf("%s", arr);
//	return 0;
//}

//void reverse(char* right, char* left)
//{
//	while (*right < *left)
//	{
//		char tmp = *right;
//		*right = *left;
//		*right = tmp;
//		right++;
//		left--;
//	}
//}
//void string_left_rotate(char*str,int k)
//{
//	int n = strlen(str);
//	reverse(str, str + k - 1);
//	reverse(str + k, str + n - 1);
//	reverse(str + k, str + n - 1);
//}
//int main()
//{
//	char arr[] = "ABCDEF";
//	int k = 2;
//	string_left_rotate(arr, k);
//	printf("%s", arr);
//	return 0;
//}
//is_string_rotate(char* str1, char* str2)
//{
//	int n = strlen(str1);
//	int i = 0;
//	for (i = 0; i < n; i++)//ÿ������һ���ַ�
//	{
//		char tmp = *str1;
//		int j = 0;
//		for (j = 0; j < n - 1; j++)//����n-1���ַ�����ǰŲ��
//		{
//			*(str1 + j) = *(str1 + j + 1);
//		}
//		*(str1 + n - 1) = tmp;
//	}
//	if (strcmp(str1) == strcmp(str2))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	char arr1[] = "ABCDEF";
//	char arr2[] = "CDEFAB";
//	int ret = is_string_rotate(arr1, arr2);
//	if (ret == 1)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}

//int main()
//{
//	char arr[20] = "holle";
//	//strcat(arr, "world");
//	strncat(arr, "world", 9);
//	printf("%s", arr);
//	return 0;
//}
//int is_string_rotate(char* str1, char* str2)
//{
//	int len = strlen(str1);
//	strncat(str1, str1, len);
//	char* ret = strstr(str1, str2);
//	if (ret == NULL)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	char arr1[20] = "AABCD";
//	char arr2[] = "BCDAA";
//	int ret = is_string_rotate(arr1, arr2);
//	if (ret == 1)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}
int main()
{
	int n = 0;//n��Ӳ��
	int k = 0;//ÿ��Ӳ�ҵ��ܽ��� ���� ��ӽ���һ�������� k
	int x = 0;//ÿ��Ӳ�ҵ���������ͬ����Ϊ x
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n-1; i++)
		scanf("%d ", &x);
	return 0;
}