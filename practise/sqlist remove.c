//#include<stdio.h>
//#define MaxSize 50
//typedef int DataType;
//typedef struct
//{
//    DataType data[MaxSize];
//    int n;
//}Seqlist;
////初始化顺序表
//void initlist(Seqlist* L)
//{
//    L->n = 0;           //顺序表的当前长度
//}
//int remove(Seqlist* L, int i)
//{
//    if (!L->n)return 0;
//    if (i<1 || i>L->n)return 0;
//    int x = L->data[i - 1];
//    for (int j = i; j < L->n; j++)
//    {
//        L->data[j - 1] = L->data[j];
//
//    }
//    L->n--;
//    return x;
//}
//void DispList(Seqlist L)
//{
//    for (int i = 0;i < L.n;i++)
//        printf("%d ", L.data[i]);
//    printf("\n");
//}
//void main()
//{
//    Seqlist L;
//    initlist(&L);
//    int p;
//    for (int i = 0; i < 5; i++)
//    {
//        L.data[i] = i * 2;
//        L.n++;
//    }
//    printf("原数组：");
//    DispList(L);
//    printf("请输入要删除元素的位置：");
//    scanf_s("%d", &p);
//    int result = remove(&L, p);
//    DispList(L);
//    if (!result)
//    {
//        printf("无法删除");
//    }
//    else
//    {
//        printf("被删除的数是：%d", result);
//    }
//}