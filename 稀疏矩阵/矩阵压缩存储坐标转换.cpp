//#include<stdio.h>
//int main(void)
//{
//	int k, n,a, i1, j1, i2, j2, i3, j3;
//	//上对角矩阵
//	printf("上对角矩阵压缩数组的下标和阶数：\n");
//	scanf_s("%d %d", &k,&n);
//	if (k>=0&&k<=n-1)
//	{
//		i1 = 0;
//		j1 = k;
//	}
//	else
//	{
//		a = n-1;
//		for (int i = 1; i < n; i++)
//		{
//			if (k > a && k <= a + n - i)
//			{
//				i1 = i;
//				j1 = i + k - a - 1;
//				break;
//			}
//			else a = a + n - i;
//		}
//	}
//	printf("行号:%d\n列号:%d\n", i1, j1);
//
//	//下对角矩阵
//	printf("下对角矩阵压缩数组的下标和阶数：\n");
//	scanf_s("%d %d", &k, &n);
//	if (k==0)
//	{
//		i2 = 0;
//		j2 = 0;
//	}
//	else
//	{
//		a = 1;
//		for (int i = 1; i < n; i++)
//		{
//			if (k > a-1 && k <=a+i)
//			{
//				i2 = i;
//				j2 = k - a;
//				break;
//			}
//			else a = a+i+1;
//		}
//	}
//	printf("行号:%d\n列号:%d\n", i2, j2);
//
//	//三对角阵
//	printf("三对角矩阵压缩数组的下标：\n");	
//	scanf_s("%d", &k);
//	i3 = (k + 1) / 3;
//	j3 = k - 2 * i3;
//	printf("行号:%d\n列号:%d\n", i3, j3);
//}