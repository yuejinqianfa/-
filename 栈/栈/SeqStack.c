#include<stdio.h>
#include<stdlib.h>
#define bool char
#define true 1
#define false 0
#define maxsize 50
typedef int elemtype;
typedef struct sqstack
{
	elemtype data[maxsize];
	int top;//ջ��ָ��
}sqstack;
bool initstack(sqstack* s)//��ʼ��
{
	s->top = -1;
}
//��ջ��
bool stackempty(sqstack s)
{
	if (s.top == -1) return true;
	else return false;
}
//��ջ
bool push(sqstack* s, elemtype e)
{
	if (s->top == maxsize - 1) return false;
	s->data[++s->top] = e;
	return true;
}
//��ջ
bool pop(sqstack* s, elemtype* e)
{
	if(stackempty(* s)) return false;
	*e=s->data[s->top--];
	return true;
}
//��ȡջ��Ԫ��
bool gettop(sqstack s, elemtype* e)
{
	if (stackempty(s)) return false;
	*e = s.data[s.top];
	return true;
}
void main()
{
	sqstack s;
	initstack(&s);
	push(&s, 1);
	push(&s, 2);
	push(&s, 3);
	push(&s, 4);
	push(&s, 5);
	push(&s, 6);//��ջ
	elemtype x;//�����ջ�Ͷ�ջ��Ԫ�ط��ص�ֵ
	int count = s.top;
	for (int i = 0; i <= count; i++)
	{
		gettop(s, &x);
		printf("x=%d\n", x);
		pop(&s, &x);
		printf("x=%d\n\n", x);
	}
}