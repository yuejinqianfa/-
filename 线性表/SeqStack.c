//#include<stdio.h>
//#include<stdlib.h>
//#define bool char
//#define true 1
//#define false 0
//#define MaxSize 50
//typedef int Elemtype;
//typedef struct SqStack
//{
//	Elemtype data[MaxSize];
//	int top;//栈顶指针
//}SqStack;
//bool Initstack(SqStack* S)//初始化
//{
//	S->top = -1;
//}
////判栈空
//bool StackEmpty(SqStack S)
//{
//	if (S.top == -1) return true;
//	else return false;
//}
////进栈
//bool Push(SqStack* S, Elemtype e)
//{
//	if (S->top == MaxSize - 1) return false;
//	S->data[++S->top] = e;
//	return true;
//}
////出栈
//bool Pop(SqStack* S, Elemtype* e)
//{
//	if(StackEmpty(* S)) return false;
//	*e=S->data[S->top--];
//	return true;
//}
////读取栈顶元素
//bool GetTop(SqStack S, Elemtype* e)
//{
//	if (StackEmpty(S)) return false;
//	*e = S.data[S.top];
//	return true;
//}
//void main()
//{
//	SqStack S;
//	Initstack(&S);
//	Push(&S, 1);
//	Push(&S, 2);
//	Push(&S, 3);
//	Push(&S, 4);
//	Push(&S, 5);
//	Push(&S, 6);//进栈
//	Elemtype X;//保存出栈和读栈顶元素返回的值
//	int count = S.top;
//	for (int i = 0; i <= count; i++)
//	{
//		GetTop(S, &X);
//		printf("X=%d\n", X);
//		Pop(&S, &X);
//		printf("X=%d\n\n", X);
//	}
//}