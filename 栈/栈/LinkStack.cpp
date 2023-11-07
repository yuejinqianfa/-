//#include"LinkStack.h"
//void initStack(LinkStack& S)
//{
//	S = (LinkNode*)malloc(sizeof(LinkList));
//	if (S == NULL)
//	{
//		printf("存储分配失败!\n");
//		exit(1);
//	}
//	S->link = NULL;
//}
////入栈
//bool Push(LinkStack& S, SElemType x) 
//{
//	LinkNode* p = (LinkNode*)malloc(sizeof(LinkNode));//创建新结点*p
//	p->data = x; 
//	p->link = S->link; 
//	S->link = p;//新结点插入在链头
//	return true;
//}
////退栈
//bool Pop(LinkStack& S, SElemType& x) {
//	
//	if (S->link == NULL) return false; //栈空函数返回false
//	LinkNode* p = S->link; 
//	x = p->data; //存栈顶元素
//	S->link = p->link; 
//	free(p); //栈顶指针退到次栈顶
//	return true;
//}
////
//bool GetTop(LinkStack& S, SElemType& x) {
//	//读取栈顶:若栈不空,函数通过引用参数x返回栈顶元素的值	
//	if (S->link == NULL) return false;   //栈空返回
//	x = S->link->data; return true;
//}; //返回栈顶元素的值
//
//bool stackEmpty(LinkStack& S) {
//	//判断栈是否为空；若栈空，则函数返回true，否则函数返回false
//	return S->link == NULL;
//}
////打印
//void printStack(LinkStack& S)
//{
//	for (LinkNode* p = S->link; p != NULL; p = p->link)
//	{
//		printf("%d ", p->data);
//	}
//	printf("\n");
//}
//int main()
//{
//	LinkStack S;
//	initStack(S);
//	//入栈
//	Push(S, 1);
//	Push(S, 2);
//	Push(S, 3);
//	Push(S, 4);
//	Push(S, 5);
//	printStack(S);//入栈
//	int x;
//	Pop(S, x);
//	printf("出栈元素是%d\n", x);
//	printStack(S);//出栈
//	GetTop(S, x);
//	printf("栈顶元素是%d\n", x);
//	return 0;
//}
//
