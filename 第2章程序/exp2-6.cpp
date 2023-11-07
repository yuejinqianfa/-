//�ļ���:exp2-6.cpp
#include "linklist.cpp"				//����������Ļ��������㷨
#include<string.h>
void Split1(LinkNode *&L)			//�ⷨ1����L�����н�㰴�׽��ֵ���л���
{
	LinkNode *pre,*p,*q;
	if(L->next==NULL || L->next->next==NULL)
		return;						//������LΪ�ջ���ֻ��һ�����ʱ���� 
	int x=L->next->data;			//ȡ�׽��ֵx 
	pre=L->next;					//preָ���׽��
	p=pre->next;					//pָ��pre���ĺ�̽�� 
	while(p!=NULL) 
	{
		if(p->data<x)				//���p��ֵС��xʱ 
		{ 
			pre->next=p->next;		//ɾ�����p
			p->next=L->next;		//�����p���뵽��ͷ
			L->next=p;
			p=pre->next;			//�������� 
		}
		else						//���p��ֵ���ڵ���xʱ 
		{
			pre=p;					//pre,pͬ������ 
			p=pre->next;
		}
	}
}
void Split2(LinkNode *&L)			//�ⷨ2����L�����н�㰴�׽��ֵ���л���
{
	LinkNode *p=L->next,*r,*L1,*r1;
	if(L->next==NULL || L->next->next==NULL)
		return;						//������LΪ�ջ���ֻ��һ�����ʱ���� 
	int x=L->next->data;			//ȡ�׽��ֵx 
	r=L;
	L1=(LinkNode*)malloc(sizeof(LinkNode));	//�������ڵ���x�ĵ�����L1
	r1=L1; 
	while (p!=NULL)
	{
		if (p->data<x)			//��p���ֵС��x
		{
			r->next=p; r=p;
			p=p->next;
		}
		else
		{
			r1->next=p; r1=p;
			p=p->next;
		}
	}
	r1->next=NULL;
	r->next=L1->next;			//L��L1���� 
	free(L1);
}

int main()
{
	LinkNode *L;
	ElemType a[]="daxgdchaeb";
	int n=strlen(a);
	printf("�ⷨ1\n"); 
	CreateListR(L,a,n);
	printf("  L: "); DispList(L);
	printf("  ���׽��ֵ���л���\n");
	Split1(L);
	printf("  L: "); DispList(L);
	DestroyList(L);
	printf("�ⷨ2\n"); 
	CreateListR(L,a,n);
	printf("  L: "); DispList(L);
	printf("  ���׽��ֵ���л���\n");
	Split2(L);
	printf("  L: "); DispList(L);
	DestroyList(L);
	return 1;
}
