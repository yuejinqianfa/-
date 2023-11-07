#include<stdio.h>
#include<stdlib.h>
typedef int QElemType;
#define maxSize 5 //循环队列的容量
typedef struct {
	QElemType elem[maxSize];//元素数组
	int front, rear; //队头指针和队尾指针（数组下标）
}CircQueue;

