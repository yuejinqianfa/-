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
////β�巨����ѭ��˫����
//DLNode* CreateDlist(int a[], int n)
//{
//	//����ͷ���
//	DLNode* L = (DLNode*)malloc(sizeof(DLNode));
//	L->next = L->prior = L;
//
//	//����βָ��
//	DLNode* r;
//	r = L;
//
//	//ѭ��������
//	DLNode* s;
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		s = (DLNode*)malloc(sizeof(DLNode));
//		s->data = a[i];
//
//		//��ͷ����β���֮�����һ���½��
//		r->next->prior = s;
//		s->next = r->next;
//		r->next = s;
//		s->prior = r;
//
//		//βָ��ָ���½��
//		r = s;
//	}
//	return L;
//}
////�ں�̷������
//void Insert(DLNode* L, int x, int index)
//{
//	int i;
//	DLNode* r = L, * s;
//	for (i = 0; i < index; i++)
//	{
//		r = r->next;//pÿ�ƶ�һ�Σ�i�ͼ�1
//	}
//
//	//β�巨���뵽r֮��
//	s = (DLNode*)malloc(sizeof(DLNode));
//	s->data = x;
//
//	//��ͷ����β���֮�����һ���½��
//	r->next->prior = s;
//	s->next = r->next;
//	r->next = s;
//	s->prior = r;
//}
//
////����
////[1]��ֵ����
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
////[2]��λ����
//DLNode* Locate(DLNode* L, int i)
//{
//    if (i == 0||L->next==L) return L ;//����ͷָ�����������ڰ�λɾ�����߲���ʱʹ��
//    DLNode* p = L->next;
//    while (i > 1)
//    {
//        p = p->next;
//        i--;
//    }
//    return p;
//}
//
////ɾ���ڵ�
//int Delete(DLNode* L, int i)
//{
//	DLNode* p = Locate(L, i);//��λ�ڵ�
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
////��ӡ���
//void print(DLNode* L)
//{
//	DLNode* p;
//	p = L->next;
//	printf("˫����Ϊ��\n");
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
//	DLNode* L = CreateDlist(a, n);//����
//	print(L);
//
//	printf("%d\n", Search(L, 3));//��ֵ����
//	printf("%d\n", Locate(L, 4)->data);//��λ����
//
//	Insert(L, 6, 3);//����
//	print(L);
//
//	Delete(L, 4);//ɾ��
//	print(L);
//	return 0;
//}
