 #define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
# include <bits/stdc++.h>
using namespace std;


int main()
{
	int cin;
	int n;
	double a[1000];
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	double mi = a[1], ma = a[1];
	for (int i = 1; i <= n; i++)
	{
		mi = min(mi, a[i]), ma = max(ma, a[i]);

	}
	for (int i = 1; i <= n; i++)
	{
		printf("%.0f ", floor(100.0 * (a[i] - mi) / (ma - mi)));
	}
	return 0;
}
