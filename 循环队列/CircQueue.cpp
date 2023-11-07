#include"CircQueue.h"
//ѭ�����г�ʼ�������ͷָ��Ͷ�βָ�����
void InitQueue(CircQueue& Q) 
{	
	Q.front = Q.rear = 0;
}

//����
int EnQueue(CircQueue& Q, QElemType x) {
	//�����в�������Ԫ��x���뵽��β����������1������������0�����ܽ�����
	if ((Q.rear + 1) % maxSize == Q.front)return 0; //���������ܲ��룬��������0
	Q.elem[Q.rear] = x; //���ն�βָ��ָʾλ�ò���
	Q.rear = (Q.rear + 1) % maxSize; //��βָ���1
	return 1;
};

//ɾ��
int DeQueue(CircQueue& Q, QElemType& x)
{
	//�����в��գ������˵�һ����ͷԪ�ز�ͨ�������Ͳ���x���أ���������1������������0����ʱx��ֵ��������
	if (Q.front == Q.rear) return 0; //���п�����ɾ������������0
	x = Q.elem[Q.front];
	Q.front = (Q.front + 1) % maxSize;//��ͷָ���1
	return 1;//ɾ���ɹ�����������1
}

//�п�
int QueueEmpty(CircQueue& Q) 
{
		//�ж��пշ������пգ���������1�����򷵻�0
		return Q.front == Q.rear; //����front==rear��Ԫ�ؽ��
}

//����
int QueueFull(CircQueue& Q) 
{
	//�ж�������������������������1�����򷵻�0
	return (Q.rear + 1) % maxSize == Q.front;
}

//��ȡ���ض�ͷԪ�ص�ֵ
int GetFront(CircQueue& Q, QElemType& x) {
	//�����в��գ�����ͨ�������Ͳ���x���ض�ͷԪ�ص�ֵ����������1������������0����ʱx��ֵ��������
	if (Q.front == Q.rear) return 0;//���п���������0
	x = Q.elem[Q.front]; //���ض�ͷԪ�ص�ֵ
	return 1;
};

//��ӡ
int print(CircQueue& Q)
{
	int f=Q.front;
	while (f!= Q.rear)
	{
		printf("%d ", Q.elem[f]);
		f= (f + 1) % maxSize;
	}
	printf("\n");
	return 1;
}
int main(void)
{
	CircQueue Q;
	InitQueue(Q);//��ʼ��
	EnQueue(Q, 11);
	EnQueue(Q, 12);
	EnQueue(Q, 13);
	EnQueue(Q, 14);//����
	print(Q);//��ӡ

	printf("%d\n", QueueFull(Q));//����
	
	int x;
	GetFront(Q, x);
	printf("ɾ����Ԫ��Ϊ%d\n", x);//ɾ��

	printf("%d\n", QueueEmpty(Q));//�п�
}

