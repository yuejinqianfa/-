//#include"LinkStack.h"
//void initStack(LinkStack& S)
//{
//	S = (LinkNode*)malloc(sizeof(LinkList));
//	if (S == NULL)
//	{
//		printf("�洢����ʧ��!\n");
//		exit(1);
//	}
//	S->link = NULL;
//}
////��ջ
//bool Push(LinkStack& S, SElemType x) 
//{
//	LinkNode* p = (LinkNode*)malloc(sizeof(LinkNode));//�����½��*p
//	p->data = x; 
//	p->link = S->link; 
//	S->link = p;//�½���������ͷ
//	return true;
//}
////��ջ
//bool Pop(LinkStack& S, SElemType& x) {
//	
//	if (S->link == NULL) return false; //ջ�պ�������false
//	LinkNode* p = S->link; 
//	x = p->data; //��ջ��Ԫ��
//	S->link = p->link; 
//	free(p); //ջ��ָ���˵���ջ��
//	return true;
//}
////
//bool GetTop(LinkStack& S, SElemType& x) {
//	//��ȡջ��:��ջ����,����ͨ�����ò���x����ջ��Ԫ�ص�ֵ	
//	if (S->link == NULL) return false;   //ջ�շ���
//	x = S->link->data; return true;
//}; //����ջ��Ԫ�ص�ֵ
//
//bool stackEmpty(LinkStack& S) {
//	//�ж�ջ�Ƿ�Ϊ�գ���ջ�գ���������true������������false
//	return S->link == NULL;
//}
////��ӡ
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
//	//��ջ
//	Push(S, 1);
//	Push(S, 2);
//	Push(S, 3);
//	Push(S, 4);
//	Push(S, 5);
//	printStack(S);//��ջ
//	int x;
//	Pop(S, x);
//	printf("��ջԪ����%d\n", x);
//	printStack(S);//��ջ
//	GetTop(S, x);
//	printf("ջ��Ԫ����%d\n", x);
//	return 0;
//}
//
