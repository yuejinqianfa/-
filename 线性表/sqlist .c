//#define maxsize 10      //��̬˳������󳤶�
//#include <stdio.h>
//#include <stdlib.h>
////c�����Զ���bool����
//#define bool char
//#define true 1
//#define false 0
////�Զ�������Ԫ�ص���������
//typedef int elemtype;
////˳�������Ԫ�ؽṹ��(��̬����)
//typedef struct sqlist
//{
//    //[1]�þ�̬�ġ����顱�������Ԫ��
//    elemtype data[maxsize];
//    //[2]˳���ĵ�ǰ����
//    int length;
//}sqlist;//˳�������Ͷ��壨��̬���䷽ʽ��
//
////��������----��ʼ��һ����̬˳���
//bool initsqlist(sqlist* l)
//{
//    //[1]����������Ԫ����ΪĬ�ϳ�ʼֵ
//    for (int i = 0; i < maxsize; i++)
//    {
//        l->data[i] = 0;
//    }
//    l->length = 0;
//
//    return true;
//}
////[1]��̬˳���Ĳ���
//bool sqlistinsert(sqlist* l, int i, elemtype e)
//{
//    //[1]�ж�i�ĺϷ���
//    if (i < 1 || i > l->length + 1)
//    {
//        printf("the position of the element to be inserted is invalid!\n");
//        return false;
//    }
//    if (l->length >= maxsize)
//    {
//        printf("this sequence table is full!\n");
//        return false;
//    }
//
//    //[2]����i��Ԫ�ؼ�֮���Ԫ�ض�����
//    for (int j = l->length; j >= i; j--)
//    {
//        l->data[j] = l->data[j - 1];      //��i��Ԫ�ض�Ӧ�����±�Ϊi-1������Ԫ��
//    }
//    //[3]����ȷ��λ�ò�����Ԫ��
//    l->data[i - 1] = e;
//    //[4]˳���+1(ע��:˳������󳤶Ȳ���)
//    l->length++;
//    //[5]����ɹ�,���سɹ��ź�
//    return true;
//}
//
//// ˳����Ԫ��ɾ��
//bool sqlistdelete(sqlist* l, int i, elemtype* e)
//{
//    //[1]�ж�i�ĺϷ���
//    if (i < 1 || i > l->length )
//    {
//        printf("the position of the element to be delected is invalid!\n");
//        return false;
//    }
//    if (l->length <= 0)
//    {
//        printf("this sequence table is empty!\n");
//        return false;
//    }
//    //[2]����ɾ����Ԫ��ֵ����e
//    *e = l->data[i - 1];
//    //[3]����i��Ԫ�ؼ�֮���Ԫ�ض�ǰ��
//    for (int j = i; j <l->length; j++)
//    {
//        l->data[j - 1] = l->data[j];      //��i��Ԫ�ض�Ӧ�����±�Ϊi-1������Ԫ�� 
//    }
//    //[4]˳���-1(ע��:˳������󳤶Ȳ���)
//    l->length--;
//    //[5]����ɹ�,���سɹ��ź�
//    return true;
//}
//
////��̬˳���İ�ֵ����
//int sqlistlocateelem(sqlist l, elemtype e)
//{
//    int i;
//    for (i = 0; i < l.length; i++)
//    {
//        if (l.data[i] == e)
//        {
//            return i + 1;
//        }
//    }
//    return -1;
//}
////���
//bool sqlistprint(sqlist l)
//{
//    //[1]�п�
//    if (l.length == 0)
//    {
//        printf("this sequence table is empty!\n");
//        return false;
//    }
//    //[2]���
//    printf("sqlist:\n");
//    for (int i = 0;i < l.length;i++)
//    {
//        printf("%d ", l.data[i]);
//    }
//    printf("\n");
//}
//
//void main()
//{
//    sqlist l1;
//    initsqlist(&l1);//��ʼ��
//
//    sqlistinsert(&l1, 1, 11);
//    sqlistinsert(&l1, 2, 22);
//    sqlistinsert(&l1, 3, 33);
//    sqlistinsert(&l1, 4, 44);
//    sqlistinsert(&l1, 5, 55);//����
//
//    sqlistprint(l1);//���
//
//    int e;
//    sqlistdelete(&l1, 2, &e);
//    printf("%d is deleted\n", e);//ɾ�������ɾ����Ԫ��
//
//    sqlistprint(l1);//���
//
//    printf("sqlistlocateelem = %d\n", sqlistlocateelem(l1, 44));//��ֵ����
//}