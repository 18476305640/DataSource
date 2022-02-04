#include <stdio.h>
#include <stdlib.h>
#define SUCCESS 1
#define FALSE 0
#define INIT_SIZE 5
#define INCREASE 1.5
typedef int  ElemType;
typedef  struct {
    int head;
    int tail;
    void *queueArr;
    int length;
    int capacity;
}Queue;
//初始化队列
int initQueue(Queue *queue);
//弹出
ElemType queue_pop(Queue *queue);
//入队
int queue_push(Queue *queue, ElemType elemType);
//输出队列
void PrintQueue(Queue *queue);