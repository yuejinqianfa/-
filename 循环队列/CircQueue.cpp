#include"CircQueue.h"
//循环队列初始化：令对头指针和队尾指针归零
void InitQueue(CircQueue& Q) 
{	
	Q.front = Q.rear = 0;
}

//插入
int EnQueue(CircQueue& Q, QElemType x) {
	//若队列不满，则将元素x插入到队尾，函数返回1，否则函数返回0，不能进队列
	if ((Q.rear + 1) % maxSize == Q.front)return 0; //队列满则不能插入，函数返回0
	Q.elem[Q.rear] = x; //按照队尾指针指示位置插入
	Q.rear = (Q.rear + 1) % maxSize; //队尾指针进1
	return 1;
};

//删除
int DeQueue(CircQueue& Q, QElemType& x)
{
	//若队列不空，则函数退掉一个队头元素并通过引用型参数x返回，函数返回1，否则函数返回0，此时x的值不可引用
	if (Q.front == Q.rear) return 0; //队列空则不能删除，函数返回0
	x = Q.elem[Q.front];
	Q.front = (Q.front + 1) % maxSize;//队头指针进1
	return 1;//删除成功，函数返回1
}

//判空
int QueueEmpty(CircQueue& Q) 
{
		//判队列空否。若队列空，则函数返回1，否则返回0
		return Q.front == Q.rear; //返回front==rear的元素结果
}

//判满
int QueueFull(CircQueue& Q) 
{
	//判队列满否。若队列满，则函数返回1，否则返回0
	return (Q.rear + 1) % maxSize == Q.front;
}

//获取返回队头元素的值
int GetFront(CircQueue& Q, QElemType& x) {
	//若队列不空，则函数通过引用型参数x返回队头元素的值，函数返回1，否则函数返回0，此时x的值不可引用
	if (Q.front == Q.rear) return 0;//队列空则函数返回0
	x = Q.elem[Q.front]; //返回队头元素的值
	return 1;
};

//打印
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
	InitQueue(Q);//初始化
	EnQueue(Q, 11);
	EnQueue(Q, 12);
	EnQueue(Q, 13);
	EnQueue(Q, 14);//插入
	print(Q);//打印

	printf("%d\n", QueueFull(Q));//判满
	
	int x;
	GetFront(Q, x);
	printf("删除的元素为%d\n", x);//删除

	printf("%d\n", QueueEmpty(Q));//判空
}

