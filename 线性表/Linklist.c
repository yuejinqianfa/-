//#include<stdio.h>
//#include<stdlib.h>
////�궨��
//#define bool char
//#define true 1
//#define false 0
////�Զ���
//typedef int elemtype;
////������ṹ��
//typedef struct node           //������
//{ 
//	elemtype data;            //������������
//	struct node* link;        // ����ָ��
//}node,*linklist; 
////��ʼ��(ͷָ��ĳ�ʼ����                                                                                                                                                              
//linklist initlink()
//{
//	linklist l = (linklist)malloc(sizeof(linklist));
//	//l->data = 0;//ͷָ���data�洢��
//	l->link = NULL;//ͷָ���linkָ������ĵ�һ�����
//	return l;
//}
//
////�����½��
//node* createnote(int data)
//{
//	//[1]Ϊ�½ڵ�����ռ�
//	node* newnode = (node*)malloc(sizeof(node));
//	//[2]����ڴ�����,�����ʧ��,����0
//	if (newnode == NULL)
//	{
//		printf("������ʧ��,�����ڴ�!");
//		return NULL;
//	}
//	//[3]Ϊ�½ڵ���������ָ����ֱ�ֵ
//	newnode->data = data;
//	newnode->link = NULL;
//	//[4]�����½ڵ��ָ��
//	return newnode;
//}
//
////�������ӡ
//bool printlist(linklist l)
//{
//	node* p;
//	p = l;
//	while (p->link)
//	{
//		p = p->link;
//		printf("%d ", p->data);
//	}//��ͷ�ڵ㿪ʼ����һ���ǿգ������
//	printf("NULL\n");
//	return true;
//}
//
////ͷ�巨
//bool listheadinsert(linklist l, elemtype data)
//{
//	//[1]���ô����½ڵ㺯��,Ϊ�丳ֵ
//	node* newnode = createnote(data);
//	//[2]�ȸ��½ڵ��ָ����ֵ(ָ��ԭ������ĵ�һ���ڵ�)
//	newnode->link = l->link;
//	//[3]����ͷ���ָ���½��
//	l->link = newnode;
//	//[4]����true,��ʾ����ɹ�
//	return true;
//}
//
////β�巨
//bool listtailinsert(linklist l, elemtype data)
//{
//	//[1]�����½ڵ�
//	node* newnode = createnote(data);
//	//[2]���ɹ���ָ��
//	node* p = l->link;
//	//[3]��������,�ҵ�����Ԫ��,�ù���ָ��ָ����
//	while (p->link != NULL)
//	{
//		p = p->link;
//	}
//	//[4]β�����½ڵ�
//	newnode->link = NULL;
//	p->link = newnode;
//}
//
////��λ�����
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
////����Ų��ҽڵ�ֵ
//node* getelem(linklist l, int i)
//{
//	//[1]����һ����������
//	int j = 1;
//	//[2]���ô����صĽ��p,��ʼָ���һ�����
//	node* p = l->link;
//	//[3]������
//	if (i == 0) { p = l; return p; }
//	if (i < 1) { return NULL; }
//	//[4]��ʼѭ��
//	while (p != NULL && j < i)
//	{
//		p = p->link;
//		j++;
//	}
//	//[5]���ֵ,�˴����ص�i������ָ�룬��i���ڱ����򷵻�NULL
//	return p;
//}
//
////��ֵ���ұ�ڵ�
//node* locateelem(linklist l, elemtype e)
//{
//	//[1]���ô����صĽ��p,��ʼָ���һ�����
//	node* p = l->link;
//	//[2]��ʼѭ���Ƚ�
//	while (p != NULL && p->data != e)
//	{
//		p = p->link;
//	}
//	//[3]/�ҵ��󷵻ظý��ָ�룬���򷵻�ull
//	return p;
//}
//
////ɾ��ָ���ڵ�
//bool delete(linklist l, int i)
//{
//	//[1]��λ
//	node* p = getelem(l, i-1);
//	node* q = p->link;
//	//[2]��������
//	p->link = q->link;
//	//[3]�ͷŽ��
//	free(q);
//}
//
//void main()
//{
//	linklist l = NULL;
//	//�������ʼ��
//	l = initlink();
//	//ͷ��
//	listheadinsert(l, 11);
//	listheadinsert(l, 12);
//	listheadinsert(l, 13);
//	listheadinsert(l, 14);
//	listheadinsert(l, 15);
//	printlist(l);//��ӡ
//
//	//β��
//	listtailinsert(l, 16);
//	listtailinsert(l, 17);
//	listtailinsert(l, 18);
//	listtailinsert(l, 19);
//	listtailinsert(l, 20);
//	printlist(l);//��ӡ
//
//	//��λ�����
//	listinsert(l, 4, 1688);
//	printlist(l);//��ӡ
//
//	getelem(l, 2);
//	printf("%d ", getelem(l, 2)->data);//��λ����,�������λ������
//	locateelem(l, 1688);
//	printf("%d\n", locateelem(l, 1688)->data);//��ֵ���ң�������õ��ֵ
//	
//	delete(l, 3);
//	printlist(l);//��ӡ
//}