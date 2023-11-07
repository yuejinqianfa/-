#include<stdio.h>
int getMax(int a[], int n)
{
	int i, k = 0;
	for (i = 0;i < n - 1;i++)
		if (a[i] > a[k]) k = i;	
	return k;
}
void main01()
{
	int b[5] = { 23,45,67,89,65 };
	printf("最大值元素为%d", b[getMax(b, 5)]);
}