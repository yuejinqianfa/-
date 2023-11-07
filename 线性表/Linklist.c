//#include<stdio.h>
//#include<stdlib.h>
////宏定义
//#define bool char
//#define true 1
//#define false 0
////自定义
//typedef int elemtype;
////单链表结构体
//typedef struct node           //链表结点
//{ 
//	elemtype data;            //定义数据类型
//	struct node* link;        // 链接指针
//}node,*linklist; 
////初始化(头指针的初始化）                                                                                                                                                              
//linklist initlink()
//{
//	linklist l = (linklist)malloc(sizeof(linklist));
//	//l->data = 0;//头指针的data存储表长
//	l->link = NULL;//头指针的link指向链表的第一个结点
//	return l;
//}
//
////创建新结点
//node* createnote(int data)
//{
//	//[1]为新节点申请空间
//	node* newnode = (node*)malloc(sizeof(node));
//	//[2]如果内存满了,则分配失败,返回0
//	if (newnode == NULL)
//	{
//		printf("分配结点失败,请检查内存!");
//		return NULL;
//	}
//	//[3]为新节点的数据域和指针域分别赋值
//	newnode->data = data;
//	newnode->link = NULL;
//	//[4]返回新节点的指针
//	return newnode;
//}
//
////单链表打印
//bool printlist(linklist l)
//{
//	node* p;
//	p = l;
//	while (p->link)
//	{
//		p = p->link;
//		printf("%d ", p->data);
//	}//从头节点开始，下一个非空，就输出
//	printf("NULL\n");
//	return true;
//}
//
////头插法
//bool listheadinsert(linklist l, elemtype data)
//{
//	//[1]调用创建新节点函数,为其赋值
//	node* newnode = createnote(data);
//	//[2]先给新节点的指针域赋值(指向原来链表的第一个节点)
//	newnode->link = l->link;
//	//[3]再让头结点指向新结点
//	l->link = newnode;
//	//[4]返回true,表示插入成功
//	return true;
//}
//
////尾插法
//bool listtailinsert(linklist l, elemtype data)
//{
//	//[1]申请新节点
//	node* newnode = createnote(data);
//	//[2]生成工具指针
//	node* p = l->link;
//	//[3]遍历链表,找到最后的元素,用工具指针指向它
//	while (p->link != NULL)
//	{
//		p = p->link;
//	}
//	//[4]尾插入新节点
//	newnode->link = NULL;
//	p->link = newnode;
//}
//
////按位序插入
//bool listinsert(linklist l, int i, elemtype data)
//{
//	int count;
//	node* newnode = createnote(data);
//	node* p = l;
//	for (count = 0; count < i - 1; count++)
//	{
//		if (p->link == NULL) return false;
//		p = p->link;
//	}
//	newnode->link = p->link;
//	p->link = newnode;
//}
//
////按序号查找节点值
//node* getelem(linklist l, int i)
//{
//	//[1]设置一个变量计数
//	int j = 1;
//	//[2]设置待返回的结点p,开始指向第一个结点
//	node* p = l->link;
//	//[3]检查参数
//	if (i == 0) { p = l; return p; }
//	if (i < 1) { return NULL; }
//	//[4]开始循环
//	while (p != NULL && j < i)
//	{
//		p = p->link;
//		j++;
//	}
//	//[5]输出值,此处返回第i个结点的指针，若i大于表长，则返回NULL
//	return p;
//}
//
////按值查找表节点
//node* locateelem(linklist l, elemtype e)
//{
//	//[1]设置待返回的结点p,开始指向第一个结点
//	node* p = l->link;
//	//[2]开始循环比较
//	while (p != NULL && p->data != e)
//	{
//		p = p->link;
//	}
//	//[3]/找到后返回该结点指针，否则返回ull
//	return p;
//}
//
////删除指定节点
//bool delete(linklist l, int i)
//{
//	//[1]定位
//	node* p = getelem(l, i-1);
//	node* q = p->link;
//	//[2]复制数据
//	p->link = q->link;
//	//[3]释放结点
//	free(q);
//}
//
//void main()
//{
//	linklist l = NULL;
//	//将链表初始化
//	l = initlink();
//	//头插
//	listheadinsert(l, 11);
//	listheadinsert(l, 12);
//	listheadinsert(l, 13);
//	listheadinsert(l, 14);
//	listheadinsert(l, 15);
//	printlist(l);//打印
//
//	//尾插
//	listtailinsert(l, 16);
//	listtailinsert(l, 17);
//	listtailinsert(l, 18);
//	listtailinsert(l, 19);
//	listtailinsert(l, 20);
//	printlist(l);//打印
//
//	//按位序插入
//	listinsert(l, 4, 1688);
//	printlist(l);//打印
//
//	getelem(l, 2);
//	printf("%d ", getelem(l, 2)->data);//按位查找,并输出该位的数据
//	locateelem(l, 1688);
//	printf("%d\n", locateelem(l, 1688)->data);//按值查找，并输出该点的值
//	
//	delete(l, 3);
//	printlist(l);//打印
//}