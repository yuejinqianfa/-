////#include <stdio.h>
////#include <stdlib.h>
////#include <assert.h>
////
//////����bool
////#define bool char
////#define true 1
////#define false 0
////
//////����˳��������Elemtype
////typedef int Elemtype;
////
/////*���������������ݽṹ*/
//////��1��ѭ��������Ľ��ṹ
////typedef struct Node
////{
////    Elemtype data;//������
////    struct Node* next;//ָ����
////}Node, * PNode;
////
//////��2��ѭ�������������ṹ
////typedef struct CLinkList
////{
////    PNode head;//ָ��ͷ���
////    PNode tail;//ָ��β���
////    int length;//��¼����� 
////}CLinkList;
////
/////*ѭ��������ĳ�ʼ��*/
////bool CLinkListInit(CLinkList* L)
////{
////    //[1]����ͷ���
////    PNode HeadNode = (PNode)malloc(sizeof(Node));
////    //[2]�д�
////    assert(HeadNode);
////    //[3]Ȼ������ṹ���ͷ���ṹ������
////    L->head = L->tail = HeadNode;
////    L->length = 0;
////    //[4]��ͷ����nextָ��ָ��ͷָ��
////    HeadNode->next = L->head;
////}
////
/////*�����½ڵ�*/
////PNode CreatNode(Elemtype e)
////{
////    //[1]�����½ڵ�Ŀռ�
////    PNode newNode = (PNode)malloc(sizeof(Node));
////    //[2]Ϊ�½ڵ㸳ֵ
////    newNode->data = e;
////    newNode->next = NULL;
////}
////
/////*��λ*/
//////��1����λ��λ
////PNode GetElem(CLinkList* L, int i)
////{
////    //[1]�ж�Ҫ��λ�Ľ���Ƿ�Ϸ�������
////    assert(L);//���L�����Ƿ����
////    if (i == 0) return L->head;//����ͷָ�����������ڰ�λɾ�����߲���ʱʹ��
////    if (L->length < i || i < 1) return NULL;//�������Ľڵ�λ���Ƿ����
////    //[2]���ɶ�λָ��
////    PNode p = L->head->next;
////    //[3]ѭ����λ
////    while (i > 1)
////    {
////        p = p->next;
////        i--;
////    }
////    //[4]����p
////    return p;
////}
//////��2��������ֵ��λ
////PNode LocateElem(CLinkList* L, Elemtype e)
////{
////    //[1]�д�
////    assert(L);//���L�����Ƿ����
////    //[2]���ɶ�λָ��
////    PNode p = L->head->next;
////    //[3]ѭ����λ
////    for (int i = 1; i < L->length; i++)
////    {
////        if (p->data == e) return p;
////        p = p->next;
////    }
////    return NULL;
////}
////
/////*�������ϵ��пշ�ʽ*/
//////����ͷ����ָ���Ƿ�ָ��ͷָ��Ϊ�п�����
////bool IfEmpty(CLinkList* L)
////{
////    return (L->head->next == L->head);
////}
////
/////*�����½ڵ�*/
//////��1��ͷ�巨
////bool CLinListHeadInsert(CLinkList* L, Elemtype e)
////{
////    //[1]�����½ڵ�
////    PNode newNode = CreatNode(e);
////    //[2]�����½ڵ�
////    newNode->next = L->head->next;
////    L->head->next = newNode;
////    //[3]�ж����Ƿ��ǵ�һ�����
////    if (L->head == L->tail)
////        L->tail = newNode;
////    //[4]�����ȼ�1
////    L->length++;
////    //[5]����ɹ���������Ϣ
////    return 1;
////}
//////��2��β�巨
////bool CLinListTailInsert(CLinkList* L, Elemtype e)
////{
////    //[1]�����½ڵ�
////    PNode newNode = CreatNode(e);
////    //[2]�����½ڵ�
////    newNode->next = L->tail->next;
////    L->tail->next = newNode;
////    L->tail = newNode;
////    //[3]�����ȼ�1
////    L->length++;
////    //[4]����ɹ���������Ϣ
////    return 1;
////}
//////��3����λ����
////bool CLinListLocalInsert(CLinkList* L, int i, Elemtype e)
////{
////    //[1]�жϲ����λ���Ƿ�Ϸ�������
////    if (i > L->length + 1 || i < 1)  return 0;
////    if (IfEmpty(L))              return 0;
////    //[2]��λ
////    PNode p = GetElem(L, i - 1);
////    //[3]�����½ڵ�
////    PNode newNode = CreatNode(e);
////    //[4]�����½ڵ�
////    newNode->next = p->next;
////    p->next = newNode;
////    //[5]�����ȼ�1
////    L->length++;
////    //[6]����ɹ���������Ϣ
////    return 1;
////}
////
/////*��������*/
////int printList(CLinkList* L)
////{
////    //[1]�п�
//    if (IfEmpty(L))
//    {
//        printf("��գ�\n");
//        return 0;
//    }
//    //[2]���ɶ�λָ��
//    PNode p = L->head->next;
//    //[2]forѭ������
//    printf("HEADNODE ==> ");
//    for (int i = 1;i <= L->length;i++)
//    {
//        printf("%d ==> ", p->data);
//        p = p->next;
//        if (i == L->length)
//            printf("HEADNODE\n");
//    }
//    return 0;
//}
//
///*ɾ���ڵ�*/
////��λɾ��
//bool DeleteNode(CLinkList* L, int i)
//{
//    //[1]�жϲ����λ���Ƿ�Ϸ�
//    if (i > L->length || i < 1)  return 0;
//    if (IfEmpty(L))              return 0;
//    //[2]��λ��ɾ���ڵ������ǰһ�ڵ�
//    PNode p = GetElem(L, i - 1);//��ɾ���ڵ��ǰһ�ڵ�
//    PNode q = p->next;//��ɾ���ڵ�
//    //[3]ִ��ɾ������
//    p->next = p->next->next;
//    free(q);
//    //[4]������-1
//    L->length--;
//    //[5]ɾ���ɹ���������Ϣ
//    return 1;
//}
//
///*�����������Դ���*/
//int main()
//{
//    CLinkList L;
//    CLinkListInit(&L);
//    CLinListHeadInsert(&L, 1);
//    CLinListHeadInsert(&L, 2);
//    CLinListHeadInsert(&L, 3);
//    CLinListHeadInsert(&L, 4);
//    CLinListHeadInsert(&L, 5);
//    CLinListHeadInsert(&L, 6);
//    printList(&L);//ͷ��
//
//    CLinListTailInsert(&L, 7);
//    CLinListTailInsert(&L, 8);
//    CLinListTailInsert(&L, 9);
//    CLinListTailInsert(&L, 10);
//    printList(&L);//β��
//
//    CLinListLocalInsert(&L, 11, 66666);
//    printList(&L);//��λ����
//
//    printf("%d\n", LocateElem(&L, 7)->data);
//    printf("%d\n", GetElem(&L, 6)->data);//����
//
//    DeleteNode(&L, 1);//ɾ��
//    printList(&L);
//
//    return 0;
////}
////
#include<stdio.h>
#include<stdlib.h>
#define maxSize 100

typedef struct DLNode
{
	int data;
	struct DLNode* prior;
	struct DLNode* next;
}DLNode;
//β�巨����ѭ��˫����
DLNode* CreateDlist(int a[], int n)
{
	//����ͷ���
	DLNode* L = (DLNode*)malloc(sizeof(DLNode));
	L->next = L->prior = L;

	//����βָ��
	DLNode* r;
	r = L;

	//ѭ��������
	DLNode* s;
	int i;
	for (i = 0; i < n; ++i)
	{
		s = (DLNode*)malloc(sizeof(DLNode));
		s->data = a[i];

		//��ͷ����β���֮�����һ���½��
		r->next->prior = s;
		s->next = r->next;
		r->next = s;
		s->prior = r;

		//βָ��ָ���½��
		r = s;
	}
	return L;
}

//��ӡ���
void print(DLNode* L)
{
	DLNode* p;
	p = L->next;
	printf("\n˫����Ϊ��\n");
	while (p != L)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}

//���ң����ز���ֵx�������е�λ��i����ͷ���λ��Ϊ0
//��x�ڱ����򷵻�ʵ��λ�ã��������򷵻�β���λ��
//��ֵ���ң�����x�������е�λ��
int Locate(DLNode* L, int x)
{
	int i;
	DLNode* p;

	p = L;
	i = 0;

	while (p->next != L)
	{
		++i;
		if (p->next->data == x)
		{
			break;
		}
		p = p->next;
	}

	return i;
}

//��λ���ң����������е�i���ڵ�
DLNode* Locate(DLNode* L, int i)
{
    if (i == 0||L->next==L) return L ;//����ͷָ�����������ڰ�λɾ�����߲���ʱʹ��
    DLNode* p = L->next;
    while (i > 1)
    {
        p = p->next;
        i--;
    }
    return p;
}

//����
void Insert(DLNode* L, int x, int index)
{
	int i;
	DLNode* r = L, * s;

	for (i = 0; i < index; ++i)
	{
		r = r->next;//pÿ�ƶ�һ�Σ�i�ͼ�1
	}

	//β�巨���뵽r֮��
	s = (DLNode*)malloc(sizeof(DLNode));
	s->data = x;

	//��ͷ����β���֮�����һ���½��
	r->next->prior = s;
	s->next = r->next;
	r->next = s;
	s->prior = r;

}

//ɾ��ֵΪx�Ľ��
void Delete(DLNode* L, int x)
{
	DLNode* pre, * p;
	p = L->next;

	//�ҵ��ý��
	while (p != L)
	{
		if (p->data == x)
			break;
		p = p->next;
	}

	//��x�ڱ��ڲ�ɾ�����
	if (p != L)
	{
		pre = p->prior;

		p->next->prior = pre;
		pre->next = p->next;

		free(p);
	}
}
int main()
{
	int a[maxSize] = { 1,2,3,4,5 };
	int n = 5;

	//˫��ѭ������Ĵ��������ң������ɾ��
	DLNode* L = CreateDlist(a, n);
	print(L);
	//int i = Locate(L, 3)->data;

	//Insert(L, 6, i);
	//print(L);

	Delete(L, 6);
	print(L);


	return 0;
}
