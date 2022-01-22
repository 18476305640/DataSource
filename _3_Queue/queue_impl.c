#include "queue.h"

//初始化队列
int initQueue(Queue *queue) {
    queue->queueArr = (ElemType *)malloc(sizeof(ElemType)*INIT_SIZE);
    queue->capacity=INIT_SIZE;
    queue->head = 0;
    queue->tail = -1;
    queue->length = 0;
}
//弹出
ElemType queue_pop(Queue *queue) {
    if (queue->length <= 0) return FALSE ;
    //计算出弹出后head指向的索引
    int new_head_index = (queue->head+1 > queue->capacity-1)?0:queue->head+1;
    //弹出
    ElemType elemType = queue->queueArr[queue->head];
    //维护一些属性
    queue->head = new_head_index;
    queue->length--;

    return elemType;

}
//入队
int queue_push(Queue *queue, ElemType elemType) {
    //检查容量
    if(queue->length >= queue->capacity) {
        printf("正在调整容量:%d-%d~",queue->head,queue->tail);
        ElemType *new_queueArr= (ElemType *)malloc(sizeof(ElemType)*queue->capacity*INCREASE);
        if (queue->tail >= queue->head) {
            for (int i = queue->head; i <= queue->tail; ++i) {
                new_queueArr[i - queue->head] = queue->queueArr[i];
            }
        }else {
            for (int i = queue->head; i <= queue->capacity-1; ++i) {
                new_queueArr[i - queue->head] = queue->queueArr[i];
            }
            for (int i = 0; i <= queue->tail; ++i) {
                new_queueArr[queue->capacity - queue->head + i] = queue->queueArr[i];
            }
        }
        queue->head = 0;
        queue->tail = queue->length-1;
        queue->capacity = queue->capacity*INCREASE;
        queue->queueArr = new_queueArr;
        printf("%d-%d\n",queue->head,queue->tail);

    }
    //计算出插入的索引位置
    int insert_index = (queue->tail+1 > queue->capacity-1)?0:queue->tail+1;
    //入队
    queue->queueArr[insert_index] = elemType;
    queue->tail = insert_index;
    queue->length++;
    return SUCCESS;

}
void PrintQueue(Queue *queue) {

    printf("输出队列：");
    if (queue->length <= 0) {
        printf("%空栈！容量为%d~\n",queue->capacity);
        return;
    }
    for (int i = 0; i < queue->capacity; ++i) {
        if (       (queue->tail >= queue->head && (i >= queue->head && i <= queue->tail  ))
                || ((queue->tail < queue->head && ((i >= queue->head && i<=queue->capacity-1) || (i <= queue->tail && i >= 0))) )
            ) {
            if (i == queue->head) {
                //头
                printf("\t头=>[%d](%d)-",i,queue->queueArr[i]);
            }else if(i == queue->tail) {
                //尾
                printf("[%d](%d)<=尾\t",i,queue->queueArr[i]);

            } else {
                printf("[%d](%d)-",i,queue->queueArr[i]);
            }

        }else {
            printf("[%d](NULL)",i);
        }
    }

}
