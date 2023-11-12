#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define defaultSize 50
typedef struct {
	char* ch;
	int maxSize;
	int n;
}HString;
//初始化
bool initStr(HString& S) {
	S.ch = (char*)malloc(defaultSize * sizeof(char));
	if (S.ch == NULL) { printf("存储分配失败!\n"); exit(1); }
	S.ch[0] = '\0'; S.n = 0; S.maxSize = defaultSize;
	return true;
}
//创建
bool createStr(HString& S, char A[], int n) {
	if (S.ch == NULL) { printf("存储分配失败!\n"); exit(1); }
	for (int j = 0; j < n; j++)
		S.ch[j] = A[j];
	S.n = n;
	return true;
}
//输出
bool printStr(HString& S, int n) {
	for (int i = 0; i < n; i++)
		printf("%c ", S.ch[i]);
	printf("\n");
	return true;
}
//next
bool  getNext(HString& P, int next[]) {
	int j = 0, k = -1; next[0] = -1;
	while (j < P.n)
		if (k == -1 || P.ch[j] == P.ch[k])
		{
			printf("%d ", next[j]);
			j++; k++; next[j] = k;
		}
		else {
			k = next[k];
		}
	printf("\n");
	return true;
};
//KMP算法
bool Find_KMP(HString& T, HString& P, int ad) {
	int j = 0, i = ad; int next[defaultSize];
	getNext(P, next);//判断B
	printf("第1次查找\n");
	int k = 1;
	while (j < P.n && i < T.n) {

		if (j == -1 || P.ch[j] == T.ch[i])
		{
			printf("i=%d,j=%d,%c = %c\n", i, j, P.ch[j], T.ch[i]);
			j++; i++;
		}
		else {
			printf("i=%d,j=%d,%c != %c\n", i, j, P.ch[j], T.ch[i]);
			j = next[j]; k++;
			printf("j的返回到第%d个位置\n", j);
			printf("第%d次查找", k);
			printf("\n");
		}

	}
	if (j < P.n)return-1;
	else return i - P.n;
	return true;
};
int main() {
	HString T;
	HString P;
	initStr(T);
	initStr(P);
	char A[] = { 'a','c','a','b','a','a','b','a','a','b','c','a','c','a','a','b','c' };
	char B[] = { 'a','b','a','a','b','c','a','c' };
	int next[defaultSize];
	createStr(T, A, 17);
	createStr(P, B, 8);
	printStr(T,17);
	printStr(P,8);
	Find_KMP(T, P, 0);
	Find_KMP(T, P, 1);
	return 0;
}
