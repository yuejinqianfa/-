//#include<stdio.h>
//#include<stdlib.h>
//#define CRT_SECURE_NO_WARNINGS
//
//typedef struct node {
//	int no;
//	unsigned int pwd;
//	struct node* next;
//}Node, * LinkList;
//
//LinkList create_list(int n)
//{
//	LinkList p, rear; int i;
//	/*�ȴ���ѭ������ĵ�һ�����*/
//	p = (Node*)malloc(sizeof(Node));
//	if (!p) {
//		printf("memory allocation error!\n");   return NULL;
//	}
//	printf("input password:");
//	scanf_s("%d", &(p->pwd));
//	p->no = 1;
//	p->next = p;      rear = p;
//
//	for (i = 2; i <= n; i++) {
//		p = (Node*)malloc(sizeof(Node));
//		if (!p) {
//			printf("memory allocation erro!\n");
//			return NULL;
//		}
//		printf("input password:");
//		scanf_s("%d", &(p->pwd));
//		p->no = i;
//		p->next = rear->next;
//		rear->next = p;
//		rear = p;
//	}
//	return rear;
//}/*create_list*/
//
//void output_list(LinkList head)
//{
//	LinkList p;
//	p = head;
//	do {
//		printf("(%d,%d)\t", p->no, p->pwd);
//		p = p->next;
//	} while (p != head);
//	printf("\n");
//}
//
//void Joseph(LinkList tail, int n, int m)
//{
//	LinkList pre, p;
//	int k;        m = m % n ? m % n : n;
//	pre = tail;  p = tail->next;  k = 1;
//	while (n > 1) {/*Ȧ�ж���1����ʱѭ��*/
//		if (k == m) { /*������Ҫ��ȥ���ˣ���㣩ʱ���г�Ȧ����*/
//			printf("%4d", p->no); /*pָ��Ľ��Ϊ��Ҫɾ���Ľ��*/
//			pre->next = p->next;      n--;
//			m = p->pwd % n ? p->pwd % n : n;
//			free(p);
//			p = pre->next;
//			k = 1;
//		}
//		else {
//			k++; pre = p; p = p->next;
//		}
//	}/*while*/
//	printf("%4d\n", p->no);   free(p);
//}/*Joseph*/
//
//
//int main(void) {
//	LinkList tailptr;
//	int n, initial_code;
//	printf("input the number of players and initial password:");
//	scanf_s(" %d%d", &n, &initial_code);
//	tailptr = create_list(n);
//	if (tailptr) {
//		output_list(tailptr->next);
//		Joseph(tailptr, n, initial_code);
//	}
//	return 0;
//}
