#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int age = 50;
	if (age < 18)
		printf("未成年");
	else if (age >= 18 && age < 26)
		printf("成年\n");
	else if (age >= 26 && age < 30)
		printf("青年\n");
	else if (age >= 30 && age < 40)
		printf("壮年\n");
	else    (age >= 40 && age < 60);
		printf("老年\n");
    return 0;
}