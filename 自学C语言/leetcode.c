#define _CRT_SECURE_NO_WARNINGS 1
#include<assert.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
//{
//    for (int i = 0; i < numsSize; ++i) 
//    {
//        for (int j = i + 1; j < numsSize; ++j) 
//        {
//            if (nums[i] + nums[j] == target) 
//            {
//                int* ret = malloc(sizeof(int) * 2);
//                ret[0] = i, ret[1] = j;
//                *returnSize = 2;
//                free(ret);
//                return ret;
//            }
//        }
//    }
//    *returnSize = 0;
//    return NULL;
//}
//int main()
//{
//    int arr[] = { 2,7,11,15 };
//    int len = strlen(arr);
//    int aim = 9;
//    int returnSize = 0;
//    twoSum(arr,len,aim, returnSize);
//    //printf("%d", );
//    return 0;
//}
//char* getmemory(char* p)
//{
//    p = (char*)malloc(100);
//    return p;
//}
//int main()
//{
//    char* str = NULL;
//    str = getmemory(str);
//    strcpy(str, "holle world");
//    printf(str);
//    free(str);
//    str = NULL;
//    return 0;
//}

//struct S
//{
//    int n;
//    int* arr;
//};
//int main()
//{
//    struct S* ps = (struct S*)malloc(sizeof(struct S));
//    if (ps == NULL)
//    {
//        return 1;
//    }
//    ps->arr = (int*)malloc(10 * sizeof(int));
//    if (ps->arr == NULL)
//    {
//        return 1;
//    }
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        ps->arr[i] = i;
//        printf("%d ", ps->arr[i]);
//    }
//    int* ptr = realloc(ps->arr, sizeof(struct S));
//    if (ptr != NULL);
//    {
//        ps->arr = ptr;
//    }
//    free(ps->arr);
//    ps->arr = NULL;
//    free(ps);
//    ps = NULL;
//    return 0;
//}
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                if (i == j)
//                    printf("x");
//                else if (i + j == n - 1)
//                    printf("x");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//int main()
//{
//	int score = 0;
//	int max = 0;
//	int min = 100;
//	int sum = 0;
//	for (int i = 0; i < 7; i++)
//	{
//		scanf("%d", &score);
//		sum += score;
//		if (score > max)
//			max = score;
//		if (score < min)
//			min = score;
//	}
//	printf("%.2f\n", (sum - min - max) / 5);
//	return 0;
//}

//int main()//输出月份的天数
//{
//	int year = 0;
//	int month = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (scanf("%d %d", &year, &month) != EOF)
//	{
//		int day = days[month];
//		if(month == 2)
//			if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//				day += 1;
//		printf("%d\n", day);
//	}
//	return 0;
//

//int main()//有序序列查入一个数
//{
//	int m = 0;//要插入的数字 5
//	int n = 0;//n个元素
//	int i = 0;
//	int arr[51] = { 0 };//1 6 9 22 30
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &m);
//	for (i = n - 1; i >= 0; i--)//插入数据
//	{
//		if (arr[i] > m)
//		{
//			arr[i + 1] = arr[i];
//		}
//		else
//		{
//			arr[i + 1] = m;
//			break;
//		}
//		if (i < 0)//处理插入的数据小于所有的数据
//			arr[0] = m;
//	}
//	for (i = 0; i < n +1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//struct S
//{
//    char arr[10];
//    int age;
//    float f;
//};
//int main()
//{
//    struct S s = { "hello",20,5.5f };
//    char buf[100] = { 0 };
//    sprintf(buf, "%s %d %f", s.age, s.arr, s.f);
//    printf("%s", buf);
//    return 0;
//}

int main()
{
	printf("%s", __FUNCTION__);
	return 0;

}