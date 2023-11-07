#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

// 定义动态顺序表结构
typedef struct {
    int *data;     // 指向存储数据的数组
    int length;    // 当前存储元素个数
    int capacity;  // 动态顺序表的容量
} DynamicSeqList;

// 初始化动态顺序表
void initDynamicSeqList(DynamicSeqList *list, int initialCapacity) {
    list->data = (int *)malloc(initialCapacity * sizeof(int));  // 根据初始容量分配内存
    list->length = 0;
    list->capacity = initialCapacity;
}

// 在动态顺序表的末尾插入元素
void appendElement(DynamicSeqList *list, int element) {
    if (list->length == list->capacity) {
        // 动态扩展容量
        int newCapacity = list->capacity * 2;
        list->data = (int *)realloc(list->data, newCapacity * sizeof(int));
        list->capacity = newCapacity;
    }

    list->data[list->length] = element;
    list->length++;
}

// 在动态顺序表中查找指定元素的位置
int findElement(DynamicSeqList list, int element) {
    for (int i = 0; i < list.length; i++) {
        if (list.data[i] == element) {
            return i;  // 找到元素，返回其位置
        }
    }

    return -1;  // 未找到元素，返回 -1
}

// 输出动态顺序表
void dispDynamicSeqList(DynamicSeqList list) {
    printf("Dynamic sequential list elements: ");
    for (int i = 0; i < list.length; i++) {
        printf("%d ", list.data[i]);
    }
    printf("\n");
}

int main() {
    DynamicSeqList list;
    int initialCapacity = 5;

    // 初始化动态顺序表
    initDynamicSeqList(&list, initialCapacity);

    // 在动态顺序表中插入元素
    for (int i = 1; i <= 5; i++) {
        appendElement(&list, i);
    }

    // 输出动态顺序表
    dispDynamicSeqList(list);

    // 查找元素
    int elementToFind = 3;
    int position = findElement(list, elementToFind);

    if (position != -1) {
        printf("Element %d found at position %d.\n", elementToFind, position);
    } else {
        printf("Element %d not found.\n", elementToFind);
    }

    return 0;
}
