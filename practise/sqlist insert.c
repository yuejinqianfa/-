#include<stdio.h>
#define MaxSize 50
typedef int DataType;
typedef struct
{
    DataType data[MaxSize];
    int n;
}Seqlist;
//��ʼ��˳���
void initlist05(Seqlist *L)    
{
    L->n = 0;           //˳���ĵ�ǰ����
}
//����Ԫ��
void insert05(Seqlist* L, int element, DataType position)
{                                                                                                                                                                   
    if (position<0 || position>L->n + 1)
    {
        printf("error");
        return;
    }
    for (int j = L->n; j >= position; j--)
    {
        L->data[j] = L->data[j - 1];
    }                  
    L->data[position - 1] = element;
    L->n++;
}
//������Ա�
void DispList05(Seqlist L)
{
    for (int i = 0;i < L.n;i++)
        printf("%d ", L.data[i]);
    printf("\n");
}
void main05()
{
    Seqlist L;
    initlist(&L);
    //int target, position, result;
    insert(&L,99,1);// ����˳������Ԫ��
    insert(&L, 95, 2);
    //���������
    DispList(L);
   /* if (result != 0)
    {
        
    }
    else
    {
        printf("error");
    }*/
}