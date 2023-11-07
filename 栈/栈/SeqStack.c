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
	int top;//栈顶指针
}sqstack;
bool initstack(sqstack* s)//初始化
{
	s->top = -1;
}
//判栈空
bool stackempty(sqstack s)
{
	if (s.top == -1) return true;
	else return false;
}
//进栈
bool push(sqstack* s, elemtype e)
{
	if (s->top == maxsize - 1) return false;
	s->data[++s->top] = e;
	return true;
}
//出栈
bool pop(sqstack* s, elemtype* e)
{
	if(stackempty(* s)) return false;
	*e=s->data[s->top--];
	return true;
}
//读取栈顶元素
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
	push(&s, 6);//进栈
	elemtype x;//保存出栈和读栈顶元素返回的值
	int count = s.top;
	for (int i = 0; i <= count; i++)
	{
		gettop(s, &x);
		printf("x=%d\n", x);
		pop(&s, &x);
		printf("x=%d\n\n", x);
	}
}