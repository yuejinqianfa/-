#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

// ���嶯̬˳���ṹ
typedef struct {
    int *data;     // ָ��洢���ݵ�����
    int length;    // ��ǰ�洢Ԫ�ظ���
    int capacity;  // ��̬˳��������
} DynamicSeqList;

// ��ʼ����̬˳���
void initDynamicSeqList(DynamicSeqList *list, int initialCapacity) {
    list->data = (int *)malloc(initialCapacity * sizeof(int));  // ���ݳ�ʼ���������ڴ�
    list->length = 0;
    list->capacity = initialCapacity;
}

// �ڶ�̬˳����ĩβ����Ԫ��
void appendElement(DynamicSeqList *list, int element) {
    if (list->length == list->capacity) {
        // ��̬��չ����
        int newCapacity = list->capacity * 2;
        list->data = (int *)realloc(list->data, newCapacity * sizeof(int));
        list->capacity = newCapacity;
    }

    list->data[list->length] = element;
    list->length++;
}

// �ڶ�̬˳����в���ָ��Ԫ�ص�λ��
int findElement(DynamicSeqList list, int element) {
    for (int i = 0; i < list.length; i++) {
        if (list.data[i] == element) {
            return i;  // �ҵ�Ԫ�أ�������λ��
        }
    }

    return -1;  // δ�ҵ�Ԫ�أ����� -1
}

// �����̬˳���
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

    // ��ʼ����̬˳���
    initDynamicSeqList(&list, initialCapacity);

    // �ڶ�̬˳����в���Ԫ��
    for (int i = 1; i <= 5; i++) {
        appendElement(&list, i);
    }

    // �����̬˳���
    dispDynamicSeqList(list);

    // ����Ԫ��
    int elementToFind = 3;
    int position = findElement(list, elementToFind);

    if (position != -1) {
        printf("Element %d found at position %d.\n", elementToFind, position);
    } else {
        printf("Element %d not found.\n", elementToFind);
    }

    return 0;
}
