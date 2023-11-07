//#include<stdio.h>
//#include<stdlib.h>
//#define maxSize 100
//typedef struct DLNode
//{
//	int data;
//	struct DLNode* prior;
//	struct DLNode* next;
//}DLNode;
//
////尾插法创建循环双链表
//DLNode* CreateDlist(int a[], int n)
//{
//	//创建头结点
//	DLNode* L = (DLNode*)malloc(sizeof(DLNode));
//	L->next = L->prior = L;
//
//	//构建尾指针
//	DLNode* r;
//	r = L;
//
//	//循环插入结点
//	DLNode* s;
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		s = (DLNode*)malloc(sizeof(DLNode));
//		s->data = a[i];
//
//		//在头结点和尾结点之间插入一个新结点
//		r->next->prior = s;
//		s->next = r->next;
//		r->next = s;
//		s->prior = r;
//
//		//尾指针指向新结点
//		r = s;
//	}
//	return L;
//}
////在后继方向插入
//void Insert(DLNode* L, int x, int index)
//{
//	int i;
//	DLNode* r = L, * s;
//	for (i = 0; i < index; i++)
//	{
//		r = r->next;//p每移动一次，i就加1
//	}
//
//	//尾插法插入到r之后
//	s = (DLNode*)malloc(sizeof(DLNode));
//	s->data = x;
//
//	//在头结点和尾结点之间插入一个新结点
//	r->next->prior = s;
//	s->next = r->next;
//	r->next = s;
//	s->prior = r;
//}
//
////查找
////[1]按值查找
//int Search(DLNode* L, int x)
//{
//	int i;
//	DLNode* p;
//
//	p = L;
//	i = 0;
//
//	while (p->next != L)
//	{
//		i++;
//		if (p->next->data == x)
//		{
//			break;
//		}
//		p = p->next;
//	}
//
//	return i;
//}
////[2]按位查找
//DLNode* Locate(DLNode* L, int i)
//{
//    if (i == 0||L->next==L) return L ;//返回头指针的情况，用于按位删除或者插入时使用
//    DLNode* p = L->next;
//    while (i > 1)
//    {
//        p = p->next;
//        i--;
//    }
//    return p;
//}
//
////删除节点
//int Delete(DLNode* L, int i)
//{
//	DLNode* p = Locate(L, i);//定位节点
//	if (p == NULL)
//	{
//		return 0;
//	}
//	p->next->prior = p->prior;
//	p->prior->next = p->next;
//	free(p);
//	return 1;
//}
//
////打印输出
//void print(DLNode* L)
//{
//	DLNode* p;
//	p = L->next;
//	printf("双链表为：\n");
//	while (p != L)
//	{
//		printf("%d ", p->data);
//		p = p->next;
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int a[maxSize] = { 1,2,3,4,5 };
//	int n = 5;
//
//	DLNode* L = CreateDlist(a, n);//创建
//	print(L);
//
//	printf("%d\n", Search(L, 3));//按值查找
//	printf("%d\n", Locate(L, 4)->data);//按位查找
//
//	Insert(L, 6, 3);//插入
//	print(L);
//
//	Delete(L, 4);//删除
//	print(L);
//	return 0;
//}
