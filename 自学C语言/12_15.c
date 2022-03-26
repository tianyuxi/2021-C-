#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//	int (*p)(int, int);//函数指针
//	int(*p2[5])(int, int);//函数指针的数组
//	int (*(*p3)[5])(int, int);//函数指针数组的地址
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				int tmp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	//冒泡排序
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	print_arr(arr,sz);
//	return 0;
//}
print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
//}
int com_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
//
//void test1()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), com_int);
//	print_arr(arr, sz);
//}

struct Stu
{
	char name[20];
	int age;
};

//void qsort(void* base, size_t num, size_t size,
//	int (*compar)(const void*, const void*));
int sort_age(const void* e1, const void* e2)
{
	return (((struct Stu*)e1)->age - ((struct Stu*)e2)->age));
}

int sort_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name - ((struct Stu*)e2)->name);
}
void test2()
{
	struct Stu s[] = { {"张三",18},{"李四",19},{"王五",20} };
	int sz = sizeof(s) / sizeof(s[0]);
	//qsort(s, sz, sizeof(s[0]), sort_age);//按照年龄比较
	qsort(s, sz, sizeof(s[0]), sort_name);

}
void qsort(void* base, size_t num, size_t size,
    int (*compar)(const void*, const void*));
#include<stdio.h>
void Swap(char* buf1, char* buf2, int width)
{
    int i = 0;
    for (i = 0; i < width; i++)
    {
        char tmp = buf1;
        buf1 = buf2;
        buf2 = tmp;
        buf1++;
        buf2++;
    }
}
void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
{
    int i = 0;
    for (i = 0; i < sz - 1; i++)//趟数2
    {
        int j = 0;
        for (j = 0; j < sz - i - 1; j++)//一趟的排序
        {
            if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)//两个元素比较
            {
                Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
            }
        }
    }
}

int main()
{
    int arr = { 9,8,7,6,5,4,3,2,1,0 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, sz, sizeof(arr[0], com_int);
    print_arr(arr,sz);

}