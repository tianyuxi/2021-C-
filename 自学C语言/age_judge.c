#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int age = 50;
	if (age < 18)
		printf("δ����");
	else if (age >= 18 && age < 26)
		printf("����\n");
	else if (age >= 26 && age < 30)
		printf("����\n");
	else if (age >= 30 && age < 40)
		printf("׳��\n");
	else    (age >= 40 && age < 60);
		printf("����\n");
    return 0;
}