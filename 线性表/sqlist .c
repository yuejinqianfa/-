//#define maxsize 10      //静态顺序表的最大长度
//#include <stdio.h>
//#include <stdlib.h>
////c语言自定义bool变量
//#define bool char
//#define true 1
//#define false 0
////自定义数据元素的数据类型
//typedef int elemtype;
////顺序表数据元素结构体(静态分配)
//typedef struct sqlist
//{
//    //[1]用静态的“数组”存放数据元素
//    elemtype data[maxsize];
//    //[2]顺序表的当前长度
//    int length;
//}sqlist;//顺序表的类型定义（静态分配方式）
//
////基本操作----初始化一个静态顺序表
//bool initsqlist(sqlist* l)
//{
//    //[1]将所有数据元素设为默认初始值
//    for (int i = 0; i < maxsize; i++)
//    {
//        l->data[i] = 0;
//    }
//    l->length = 0;
//
//    return true;
//}
////[1]静态顺序表的插入
//bool sqlistinsert(sqlist* l, int i, elemtype e)
//{
//    //[1]判断i的合法性
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
//    //[2]将第i个元素及之后的元素都后移
//    for (int j = l->length; j >= i; j--)
//    {
//        l->data[j] = l->data[j - 1];      //第i个元素对应数组下标为i-1的数组元素
//    }
//    //[3]在正确的位置插入新元素
//    l->data[i - 1] = e;
//    //[4]顺序表长+1(注意:顺序表的最大长度不变)
//    l->length++;
//    //[5]插入成功,返回成功信号
//    return true;
//}
//
//// 顺序表的元素删除
//bool sqlistdelete(sqlist* l, int i, elemtype* e)
//{
//    //[1]判断i的合法性
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
//    //[2]将被删除的元素值赋给e
//    *e = l->data[i - 1];
//    //[3]将第i个元素及之后的元素都前移
//    for (int j = i; j <l->length; j++)
//    {
//        l->data[j - 1] = l->data[j];      //第i个元素对应数组下标为i-1的数组元素 
//    }
//    //[4]顺序表长-1(注意:顺序表的最大长度不变)
//    l->length--;
//    //[5]插入成功,返回成功信号
//    return true;
//}
//
////静态顺序表的按值查找
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
////输出
//bool sqlistprint(sqlist l)
//{
//    //[1]判空
//    if (l.length == 0)
//    {
//        printf("this sequence table is empty!\n");
//        return false;
//    }
//    //[2]输出
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
//    initsqlist(&l1);//初始化
//
//    sqlistinsert(&l1, 1, 11);
//    sqlistinsert(&l1, 2, 22);
//    sqlistinsert(&l1, 3, 33);
//    sqlistinsert(&l1, 4, 44);
//    sqlistinsert(&l1, 5, 55);//插入
//
//    sqlistprint(l1);//输出
//
//    int e;
//    sqlistdelete(&l1, 2, &e);
//    printf("%d is deleted\n", e);//删除并输出删除的元素
//
//    sqlistprint(l1);//输出
//
//    printf("sqlistlocateelem = %d\n", sqlistlocateelem(l1, 44));//按值查找
//}