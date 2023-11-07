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
//	/*先创建循环链表的第一个结点*/
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
//	while (n > 1) {/*圈中多于1个人时循环*/
//		if (k == m) { /*数到需要出去的人（结点）时进行出圈处理*/
//			printf("%4d", p->no); /*p指向的结点为需要删除的结点*/
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
