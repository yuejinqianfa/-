//#define InitSize 10     //��̬˳���ĳ�ʼ��󳤶�
////��Ҫ������ͷ�ļ�
//#include <stdio.h>
//#include <stdlib.h>
////C�����Զ���bool����
//#define bool char
//#define true 1
//#define false 0
////�Զ�������Ԫ�ص���������
//typedef int Elemtype;
//
////˳�������Ԫ�ؽṹ��(��̬����)
//typedef struct SeqList
//{
//    //[1]ָʾ��̬���������ָ��
//    Elemtype* data;
//    //[2]˳���ĵ�ǰ����
//    int length;
//    //[3]˳�����������
//    int maxsize;
//}SeqList;//˳�������Ͷ��壨��̬���䷽ʽ��
//
////��������----��ʼ��һ����̬˳���
//bool InitseqList(SeqList* L)
//{
//    //[1]��malloc��������һƬ�����Ĵ洢�ռ�
//    L->data = (Elemtype*)malloc(sizeof(Elemtype) * InitSize);
//    //[2]����Ĭ����󳤶ȳ�ʼ��
//    L->length = 0;
//    L->maxsize = InitSize;
//
//    return true;
//}
////��̬˳���ļӳ�
//bool IncreaseSize(SeqList* L, int len)
//{
//    //[1]����ָ��ԭ��˳���洢λ�õ�ָ��
//    int* p = L->data;
//    //[2]Ϊ˳�����һƬ��ԭ������Ŀռ�
//    L->data = (Elemtype*)malloc((L->maxsize + len) * sizeof(Elemtype));
//    //[3]ת������
//    for (int i = 0; i < L->length; i++)
//    {
//        L->data[i] = p[i];
//    }
//    //[4]�޸�˳������󳤶�,Ϊ������len
//    L->maxsize = L->maxsize + len;
//    //[5]�ͷ�ԭ���Ĵ洢�ռ�
//    free(p);
//
//    return true;
//}
////[2]��̬˳���Ĳ���
//bool SeqListInsert(SeqList* L, int i, Elemtype e)
//{
//    //[1]�ж�i�ĺϷ���
//    if (i < 1 || i > L->length )
//    {
//        printf("The position of the element to be inserted is invalid!\n");
//        return false;
//    }
//    if (L->length >= L->maxsize)
//    {
//        printf("This sequence table is full!\n");
//        return false;
//    }
//
//    //[2]����i��Ԫ�ؼ�֮���Ԫ�ض�����
//    for (int j = L->length; j >= i; j--)
//    {
//        L->data[j] = L->data[j + 1];      //��i��Ԫ�ض�Ӧ�����±�Ϊi-1������Ԫ�� 
//    }
//    //[3]����ȷ��λ�ò�����Ԫ��
//    L->data[i - 1] = e;
//    //[4]˳���+1(ע��:˳������󳤶Ȳ���)
//    L->length++;
//    //[5]����ɹ�,���سɹ��ź�
//    return true;
//}
//
////[2]��̬˳����Ԫ��ɾ��
//bool SeqListDelete(SeqList* L, int i, Elemtype* e)
//{
//    //[1]�ж�i�ĺϷ���
//    if (i < 1 || i > L->length + 1)
//    {
//        printf("The position of the element to be delected is invalid!\n");
//        return false;
//    }
//    if (L->length <= 0)
//    {
//        printf("This sequence table is empty!\n");
//        return false;
//    }
//    //[2]����ɾ����Ԫ��ֵ����e
//    *e = L->data[i - 1];
//    //[3]����i��Ԫ�ؼ�֮���Ԫ�ض�ǰ��
//    for (int j = i; j <= L->length; j++)
//    {
//        L->data[j - 1] = L->data[j];      //��i��Ԫ�ض�Ӧ�����±�Ϊi-1������Ԫ�� 
//    }
//    //[4]˳���-1(ע��:˳������󳤶Ȳ���)
//    L->length--;
//    //[5]����ɹ�,���سɹ��ź�
//    return true;
//}
//
////[2]��̬˳���İ�ֵ����
//int SeqListLocateElem(SeqList L, Elemtype e)
//{
//    int i;
//    for (i = 0; i < L.length; i++)
//    {
//        if (L.data[i] == e)
//        {
//            return i + 1;
//        }
//    }
//    return 0;
//}
//
////[2]��̬˳�������
//bool SeqListPrint(SeqList L)
//{
//    //[1]�п�
//    if (L.length == 0)
//    {
//        printf("This sequence table is empty!\n");
//        return false;
//    }
//    //[2]���
//    printf("SeqList:\n");
//    for (int i = 0;i < L.length;i++)
//    {
//        printf("%d ", L.data[i]);
//    }
//    printf("\n");
//}
//void main()
//{
//    SeqList L2;
//    InitseqList(&L2);//��ʼ��
//
//    SeqListInsert(&L2, 1, 11);
//    SeqListInsert(&L2, 2, 22);
//    SeqListInsert(&L2, 3, 33);
//    SeqListInsert(&L2, 4, 44);
//    SeqListInsert(&L2, 5, 55);//����
//
//    SeqListPrint(L2);//���
//
//    int e;
//    SeqListDelete(&L2, 2, &e);
//    printf("%d is deleted\n", e);//ɾ�������ɾ����Ԫ��
//
//    SeqListPrint(L2);//���
//
//    IncreaseSize(&L2, 5);
//    printf("%d\n", L2.maxsize);//��̬˳������ݲ�������ݺ�Ĵ�С
//   
//    printf("SeqListLocateElem = %d\n", SeqListLocateElem(L2, 44));//��ֵ����
//
//    
//}