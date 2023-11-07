#include<stdio.h>
int max(int arr[],int n)
{
	if (n == 0)return arr[0];
	else if (max(arr, n - 1) > arr[n])return max(arr, n - 1);
	else return arr[n];
}
void main03()
{
	int arr[] = { 87,56,45,675,34,67 };
	printf("数组中最大的数为：%d", max(arr,5));
}