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
//	int top;//ջ��ָ��
//}SqStack;
//bool Initstack(SqStack* S)//��ʼ��
//{
//	S->top = -1;
//}
////��ջ��
//bool StackEmpty(SqStack S)
//{
//	if (S.top == -1) return true;
//	else return false;
//}
////��ջ
//bool Push(SqStack* S, Elemtype e)
//{
//	if (S->top == MaxSize - 1) return false;
//	S->data[++S->top] = e;
//	return true;
//}
////��ջ
//bool Pop(SqStack* S, Elemtype* e)
//{
//	if(StackEmpty(* S)) return false;
//	*e=S->data[S->top--];
//	return true;
//}
////��ȡջ��Ԫ��
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
//	Push(&S, 6);//��ջ
//	Elemtype X;//�����ջ�Ͷ�ջ��Ԫ�ط��ص�ֵ
//	int count = S.top;
//	for (int i = 0; i <= count; i++)
//	{
//		GetTop(S, &X);
//		printf("X=%d\n", X);
//		Pop(&S, &X);
//		printf("X=%d\n\n", X);
//	}
//}