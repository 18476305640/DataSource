#include <stdio.h>
#include <stdlib.h>
#define FALSE 0
#define TRUE 1

typedef struct _node {
    void *data;
    struct _node *next;
} Node;

typedef struct _linkedList {
    Node *head;
    Node *tail;
    Node *current;
} LinkedList;
void initializeList(LinkedList *list);                  //初始化链表
void addHead(LinkedList *list, void *data);              //给链表的头节点添加数据
void addTail(LinkedList *list, void *data);              //给链表的尾节点添加数据
void delete(LinkedList *list, Node *node);               //从链表删除节点
Node *getNode(LinkedList *list, void *data);            //返回包含指定数据的节点指针
void PrintLinkList(LinkedList *list);