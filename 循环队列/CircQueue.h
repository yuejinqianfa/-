#include<stdio.h>
#include<stdlib.h>
typedef int QElemType;
#define maxSize 5 //ѭ�����е�����
typedef struct {
	QElemType elem[maxSize];//Ԫ������
	int front, rear; //��ͷָ��Ͷ�βָ�루�����±꣩
}CircQueue;

