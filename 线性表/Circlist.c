////#include <stdio.h>
////#include <stdlib.h>
////#include <assert.h>
////
//////设置bool
////#define bool char
////#define true 1
////#define false 0
////
//////定义顺序表的数据Elemtype
////typedef int Elemtype;
////
/////*定义结点和链表的数据结构*/
//////【1】循环单链表的结点结构
////typedef struct Node
////{
////    Elemtype data;//数据域
////    struct Node* next;//指针域
////}Node, * PNode;
////
//////【2】循环单链表的链表结构
////typedef struct CLinkList
////{
////    PNode head;//指向头结点
////    PNode tail;//指向尾结点
////    int length;//记录链表表长 
////}CLinkList;
////
/////*循环单链表的初始化*/
////bool CLinkListInit(CLinkList* L)
////{
////    //[1]申请头结点
////    PNode HeadNode = (PNode)malloc(sizeof(Node));
////    //[2]判错
////    assert(HeadNode);
////    //[3]然单链表结构体和头结点结构体相连
////    L->head = L->tail = HeadNode;
////    L->length = 0;
////    //[4]让头结点的next指针指向头指针
////    HeadNode->next = L->head;
////}
////
/////*创建新节点*/
////PNode CreatNode(Elemtype e)
////{
////    //[1]申请新节点的空间
////    PNode newNode = (PNode)malloc(sizeof(Node));
////    //[2]为新节点赋值
////    newNode->data = e;
////    newNode->next = NULL;
////}
////
/////*定位*/
//////【1】按位序定位
////PNode GetElem(CLinkList* L, int i)
////{
////    //[1]判断要定位的结点是否合法或特殊
////    assert(L);//检查L链表是否存在
////    if (i == 0) return L->head;//返回头指针的情况，用于按位删除或者插入时使用
////    if (L->length < i || i < 1) return NULL;//检查输入的节点位序是否存在
////    //[2]生成定位指针
////    PNode p = L->head->next;
////    //[3]循环定位
////    while (i > 1)
////    {
////        p = p->next;
////        i--;
////    }
////    //[4]返回p
////    return p;
////}
//////【2】按内容值定位
////PNode LocateElem(CLinkList* L, Elemtype e)
////{
////    //[1]判错
////    assert(L);//检查L链表是否存在
////    //[2]生成定位指针
////    PNode p = L->head->next;
////    //[3]循环定位
////    for (int i = 1; i < L->length; i++)
////    {
////        if (p->data == e) return p;
////        p = p->next;
////    }
////    return NULL;
////}
////
/////*王道书上的判空方式*/
//////按照头结点的指针是否指向头指针为判空条件
////bool IfEmpty(CLinkList* L)
////{
////    return (L->head->next == L->head);
////}
////
/////*插入新节点*/
//////【1】头插法
////bool CLinListHeadInsert(CLinkList* L, Elemtype e)
////{
////    //[1]创建新节点
////    PNode newNode = CreatNode(e);
////    //[2]插入新节点
////    newNode->next = L->head->next;
////    L->head->next = newNode;
////    //[3]判断这是否是第一个结点
////    if (L->head == L->tail)
////        L->tail = newNode;
////    //[4]链表长度加1
////    L->length++;
////    //[5]插入成功，返回信息
////    return 1;
////}
//////【2】尾插法
////bool CLinListTailInsert(CLinkList* L, Elemtype e)
////{
////    //[1]创建新节点
////    PNode newNode = CreatNode(e);
////    //[2]插入新节点
////    newNode->next = L->tail->next;
////    L->tail->next = newNode;
////    L->tail = newNode;
////    //[3]链表长度加1
////    L->length++;
////    //[4]插入成功，返回信息
////    return 1;
////}
//////【3】按位插入
////bool CLinListLocalInsert(CLinkList* L, int i, Elemtype e)
////{
////    //[1]判断插入的位置是否合法或特殊
////    if (i > L->length + 1 || i < 1)  return 0;
////    if (IfEmpty(L))              return 0;
////    //[2]定位
////    PNode p = GetElem(L, i - 1);
////    //[3]创建新节点
////    PNode newNode = CreatNode(e);
////    //[4]插入新节点
////    newNode->next = p->next;
////    p->next = newNode;
////    //[5]链表长度加1
////    L->length++;
////    //[6]插入成功，返回信息
////    return 1;
////}
////
/////*遍历链表*/
////int printList(CLinkList* L)
////{
////    //[1]判空
//    if (IfEmpty(L))
//    {
//        printf("表空！\n");
//        return 0;
//    }
//    //[2]生成定位指针
//    PNode p = L->head->next;
//    //[2]for循环遍历
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
///*删除节点*/
////按位删除
//bool DeleteNode(CLinkList* L, int i)
//{
//    //[1]判断插入的位置是否合法
//    if (i > L->length || i < 1)  return 0;
//    if (IfEmpty(L))              return 0;
//    //[2]定位待删除节点和它的前一节点
//    PNode p = GetElem(L, i - 1);//待删除节点的前一节点
//    PNode q = p->next;//待删除节点
//    //[3]执行删除操作
//    p->next = p->next->next;
//    free(q);
//    //[4]链表长度-1
//    L->length--;
//    //[5]删除成功，返回信息
//    return 1;
//}
//
///*主函数：测试代码*/
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
//    printList(&L);//头插
//
//    CLinListTailInsert(&L, 7);
//    CLinListTailInsert(&L, 8);
//    CLinListTailInsert(&L, 9);
//    CLinListTailInsert(&L, 10);
//    printList(&L);//尾插
//
//    CLinListLocalInsert(&L, 11, 66666);
//    printList(&L);//按位插入
//
//    printf("%d\n", LocateElem(&L, 7)->data);
//    printf("%d\n", GetElem(&L, 6)->data);//查找
//
//    DeleteNode(&L, 1);//删除
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
//尾插法创建循环双链表
DLNode* CreateDlist(int a[], int n)
{
	//创建头结点
	DLNode* L = (DLNode*)malloc(sizeof(DLNode));
	L->next = L->prior = L;

	//构建尾指针
	DLNode* r;
	r = L;

	//循环插入结点
	DLNode* s;
	int i;
	for (i = 0; i < n; ++i)
	{
		s = (DLNode*)malloc(sizeof(DLNode));
		s->data = a[i];

		//在头结点和尾结点之间插入一个新结点
		r->next->prior = s;
		s->next = r->next;
		r->next = s;
		s->prior = r;

		//尾指针指向新结点
		r = s;
	}
	return L;
}

//打印输出
void print(DLNode* L)
{
	DLNode* p;
	p = L->next;
	printf("\n双链表为：\n");
	while (p != L)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}

//查找，返回查找值x在链表中的位置i，设头结点位置为0
//若x在表内则返回实际位置，若不在则返回尾结点位置
//按值查找，返回x在链表中的位置
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

//按位查找，返回链表中第i个节点
DLNode* Locate(DLNode* L, int i)
{
    if (i == 0||L->next==L) return L ;//返回头指针的情况，用于按位删除或者插入时使用
    DLNode* p = L->next;
    while (i > 1)
    {
        p = p->next;
        i--;
    }
    return p;
}

//插入
void Insert(DLNode* L, int x, int index)
{
	int i;
	DLNode* r = L, * s;

	for (i = 0; i < index; ++i)
	{
		r = r->next;//p每移动一次，i就加1
	}

	//尾插法插入到r之后
	s = (DLNode*)malloc(sizeof(DLNode));
	s->data = x;

	//在头结点和尾结点之间插入一个新结点
	r->next->prior = s;
	s->next = r->next;
	r->next = s;
	s->prior = r;

}

//删除值为x的结点
void Delete(DLNode* L, int x)
{
	DLNode* pre, * p;
	p = L->next;

	//找到该结点
	while (p != L)
	{
		if (p->data == x)
			break;
		p = p->next;
	}

	//若x在表内才删除结点
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

	//双向循环链表的创建，查找，插入和删除
	DLNode* L = CreateDlist(a, n);
	print(L);
	//int i = Locate(L, 3)->data;

	//Insert(L, 6, i);
	//print(L);

	Delete(L, 6);
	print(L);


	return 0;
}
