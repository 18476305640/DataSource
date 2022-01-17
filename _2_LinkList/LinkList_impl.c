#include "LinkList.h"
void initializeList(LinkedList *list) {
    list->head = NULL;
    list->tail = NULL;
    list->current = NULL;
}
//头插法
void addHead(LinkedList *list, void *data) {
    //创建Node & 将数据装载到Node
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = data;
    //判断是否为第一次添加，两种情况都处理尾部
    if (list->tail == NULL) {
        //空链表
        node->next = NULL;
        list->tail = node;
    }else {
        //非空链表
        node->next = list->head;
    }
    //将头指向新的Node
    list->head = node;

}
//尾插头
void addTail(LinkedList *list, void *data) {
    //创建Node & 将数据装载到Node
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = data;
    //判断是否为空链表，不管是否为空链表，处理的是左边的连接
    if (list->tail == NULL) {
        //空链表
        list->head = node;
    }else {
        //非空链表
        list->tail->next = node;
    }
    //处理右边的连接
    node->next = NULL;
    list->tail = node;
}
//删除指定Node节点，
void delete(LinkedList *list, Node *node) {
    Node *pos = list->head;
    Node *prev = NULL;
    while (pos != NULL) {
        if(pos == node) {
            if (prev == NULL && pos == list->head) {
                //要删除的是head节点
                list->head = pos->next;
                return;
            }
            //要删除的是其它元素
            prev->next = pos->next;
            free(pos);
        }
        prev = pos;
        pos = pos->next;

    }


}
//查找匹配的data，返回Node
Node *getNode(LinkedList *list, void *data) {
    Node *pos = list->head;
    while (pos != NULL) {
        if (pos->data == data) {
            return pos;
        }
        pos = pos->next;
    }
}
void PrintLinkList(LinkedList *list) {
    Node *pos = list->head;
    printf("链表输出：head-");
    while (pos != NULL) {
        if (pos->next == NULL) {
            printf("[%d](tail)-NULL\n",pos->data);
        }else {
            printf("[%d]-",pos->data);
        }
        pos = pos->next;
    }
    printf("\n");
}