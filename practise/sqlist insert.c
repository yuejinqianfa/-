#include<stdio.h>
#define MaxSize 50
typedef int DataType;
typedef struct
{
    DataType data[MaxSize];
    int n;
}Seqlist;
//初始化顺序表
void initlist05(Seqlist *L)    
{
    L->n = 0;           //顺序表的当前长度
}
//插入元素
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
//输出线性表
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
    insert(&L,99,1);// 调用顺序表插入元素
    insert(&L, 95, 2);
    //输出插入结果
    DispList(L);
   /* if (result != 0)
    {
        
    }
    else
    {
        printf("error");
    }*/
}