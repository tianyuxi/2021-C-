#define _CRT_SECURE_NO_WARNINGS 1
void qsort(void* base, size_t num, size_t size,
    int (*compar)(const void*, const void*));
#include<stdio.h>
void Swap(char* buf1, char* buf2, int width)
{
    int i = 0;
    for (i = 0; i < width; i++)
    {
        char tmp = *buf1;
        *buf1 = *buf2;
        *buf2 = tmp;
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
                Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
            }
        }
    }
}

int main()
{
    int arr = { 9,8,7,6,5,4,3,2,1,0 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr,sz,sizeof(arr[0],)
}