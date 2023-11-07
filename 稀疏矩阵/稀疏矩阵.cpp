#include<stdio.h>
#include<stdlib.h>
#define MaxTerms 100
#define M 6
#define N 7
typedef int DataType;
typedef struct {
	int row, col;
	DataType value;
} Triple;
typedef struct {
	int Rows, Cols, Terms;
	Triple elem[MaxTerms];
}SparseMatrix;
//输入稀疏矩阵建立三元组表
void convert(int A[M][N], SparseMatrix&B) {
	int i, j;
	int total = 0;
	for (i = 0; i <M; i++)
		for (j = 0; j <N; j++)
			if (A[i][j] != 0) {
				B.elem[total].row = i; B.elem[total].col = j;
				B.elem[total].value = A[i][j];
				total++;
			}
	B.Rows = M;
	B.Cols = N;
	B.Terms = total;
}
void printTriple(SparseMatrix&A) {
	printf("Rows=%d,Cols=%d,Terms=%d\n", A.Rows, A.Cols, A.Terms);
	for (int i = 0; i <A.Terms; i++)
		printf("(%d,%d,%d)\n", A.elem[i].row, A.elem[i].col, A.elem[i].value);
	printf("\n");
}
void printSMatrix(SparseMatrix&A) {
	int tmpA[N];
	int i, j, k = 0, s;
	for (s = 0; s <A.Cols; s++)tmpA[s] = 0;
	i = A.elem[k].row;
	j = A.elem[k].col;
	tmpA[j] = A.elem[k++].value;
	while (k <A.Terms) {
		if (A.elem[k].row == i) {
			j = A.elem[k].col;
			tmpA[j] = A.elem[k++].value;
		}
		else if (A.elem[k].row != i) {
			while (A.elem[k].row > i + 1) {
				for (s = 0; s <A.Cols; s++)printf("%3d", 0);
				i++;
				printf("\n");
			}
			for (s = 0; s <A.Cols; s++)printf("%3d", tmpA[s]);
			printf("\n");
			for (s = 0; s <A.Cols; s++)tmpA[s] = 0;
			i = A.elem[k].row;
			j = A.elem[k].col;
			tmpA[j] = A.elem[k++].value;
		}
	}
	for (s = 0; s <A.Cols; s++)printf("%3d", tmpA[s]);
	printf("\n");
}
void FastTranspose(SparseMatrix&a, SparseMatrix&b) {
	int* num = (int*)malloc(a.Cols * sizeof(int));
	int* rpos = (int*)malloc(a.Cols * sizeof(int));
	b.Rows = a.Cols;
	b.Cols = a.Rows;
	b.Terms = a.Terms;
	if (a.Terms > 0) {
		int i, j;
		for (i = 0; i <a.Cols; i++)num[i] = 0;
		for (i = 0; i <a.Terms; i++)num[a.elem[i].col]++;
		rpos[0] = 0;
		for (i = 1; i <a.Cols; i++)rpos[i] = rpos[i - 1] + num[i - 1];
		for (i = 0; i <a.Terms; i++) {
			j = rpos[a.elem[i].col];
			b.elem[j].row = a.elem[i].col;
			b.elem[j].col = a.elem[i].row;
			b.elem[j].value = a.elem[i].value;
			rpos[a.elem[i].col]++;
		}
	}
	free(num); free(rpos);
};

void SMatrix(SparseMatrix&A, int arr[N][M]) {
	for (int i = 0; i <N; i++)
		for (int j = 0; j <M; j++)
			arr[i][j] = 0;

	for (int k = 0; k <A.Terms; k++)
		arr[A.elem[k].row][A.elem[k].col] = A.elem[k].value;

	for (int i = 0; i <N; i++) {
		for (int j = 0; j <M; j++)
			printf("%3d ", arr[i][j]);
		printf("\n");
	}
}
int main() {
	SparseMatrix B, b;
	int mat[N][M];
	int A[M][N] = {
		{0, 0, 3, 0, 4, 0, 0},
		{0, 0, 5, 7, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0},
		{0, 2, 6, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 1, 0, 0}
	};
	// 创建稀疏矩阵
	convert(A, B);
	printTriple(B);
	printSMatrix(B);
	FastTranspose(B, b);
	printTriple(b);
	SMatrix(b,mat);
}

